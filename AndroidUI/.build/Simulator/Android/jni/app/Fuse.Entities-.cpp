#include <app/Fuse.DrawArgs.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.DrawHandler.h>
#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchHelpers.h>
#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.DefaultMaterial.h>
#include <app/Fuse.Entities.DirectArrayMeshIntersecter.h>
#include <app/Fuse.Entities.DirectionalLight.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Entry.h>
#include <app/Fuse.Entities.EnvironmentLight.h>
#include <app/Fuse.Entities.Frustum.h>
#include <app/Fuse.Entities.ILightVisitor.h>
#include <app/Fuse.Entities.IndexedArrayMeshIntersecter.h>
#include <app/Fuse.Entities.Internal.SceneGraphBuilder.h>
#include <app/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h>
#include <app/Fuse.Entities.Light.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.MeshBatchingEngine.h>
#include <app/Fuse.Entities.MeshHitTestMode.h>
#include <app/Fuse.Entities.MeshRenderer.h>
#include <app/Fuse.Entities.ModelMeshCollision.h>
#include <app/Fuse.Entities.ModelMeshCollision_Direct.h>
#include <app/Fuse.Entities.ModelMeshCollision_Indexed.h>
#include <app/Fuse.Entities.ModelMeshHelpers.h>
#include <app/Fuse.Entities.NodeExtensions.h>
#include <app/Fuse.Entities.PointLight.h>
#include <app/Fuse.Entities.Raycasting.h>
#include <app/Fuse.Entities.Raycasting_EntityVisitor.h>
#include <app/Fuse.Entities.RenderNode.h>
#include <app/Fuse.Entities.RenderToTexture.h>
#include <app/Fuse.Entities.Scene.h>
#include <app/Fuse.Entities.SkinnedMeshRenderer.h>
#include <app/Fuse.Entities.Skinner.h>
#include <app/Fuse.Entities.SpotLight.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.FrustumViewport.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestHandler.h>
#include <app/Fuse.IFrustum.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Action__Fuse_Entities_Component.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.Action__Fuse_Entities_MeshRenderer.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Material__Uno_Collect-63ed3ce3.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Ba-2233579d.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Uno_Collections-6685c86a.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Material_-dc457606.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno-65a00262.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-c68f1aae.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Mesh__Uno_Collectio-b5eaa907.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ObservableList__Fuse_Node.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.Model.h>
#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelMaterial.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_ClosingEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Collision.h>
#include <app/Uno.Geometry.Plane.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Geometry.Sphere.h>
#include <app/Uno.Geometry.Triangle.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.FramebufferFlags.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Entities {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Component__uType* Component__typeof()
{
    static ::uStaticStrong<Component__uType*> type;
    if (type != NULL) return type;

    type = (Component__uType*)::uAllocClassType(sizeof(Component__uType), "Fuse.Entities.Component", false, 0, 1, 0);

    type->SetStrongRefs(
        "_entity", offsetof(Component, _entity));

    type->SetFields(1,
        ::uNewField("_entity", NULL, offsetof(Component, _entity), ::app::Fuse::Entities::Entity__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Added", Component__Added, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction("get_Entity", Component__get_Entity, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("OnAdded", type->__fp_OnAdded, offsetof(Component__uType, __fp_OnAdded), false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("OnRemoved", type->__fp_OnRemoved, offsetof(Component__uType, __fp_OnRemoved), false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("Removed", Component__Removed, 0, false, ::app::Fuse::Entities::Entity__typeof()));

    ::uRegisterType(type);
    return type;
}

void Component___ObjInit(Component* __this)
{
}

void Component__Added(Component* __this, ::app::Fuse::Entities::Entity* e)
{
    __this->_entity = e;
    __this->OnAdded(e);
}

::app::Fuse::Entities::Entity* Component__get_Entity(Component* __this)
{
    return __this->_entity;
}

void Component__Removed(Component* __this, ::app::Fuse::Entities::Entity* e)
{
    __this->OnRemoved(e);
    __this->_entity = e;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultMaterial__uType* DefaultMaterial__typeof()
{
    static ::uStaticStrong<DefaultMaterial__uType*> type;
    if (type != NULL) return type;

    type = (DefaultMaterial__uType*)::uAllocClassType(sizeof(DefaultMaterial__uType), "Fuse.Entities.DefaultMaterial", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Entities::Material__typeof());

    type->SetStrongRefs(
        "_DiffuseMap", offsetof(DefaultMaterial, _DiffuseMap),
        "_EmissiveMap", offsetof(DefaultMaterial, _EmissiveMap),
        "_NormalMap", offsetof(DefaultMaterial, _NormalMap),
        "_SpecularMap", offsetof(DefaultMaterial, _SpecularMap));

    type->SetFunctions(23,
        ::uNewFunction("get_DiffuseColor", DefaultMaterial__get_DiffuseColor, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_DiffuseMap", DefaultMaterial__get_DiffuseMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_EmissiveColor", DefaultMaterial__get_EmissiveColor, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_EmissiveMap", DefaultMaterial__get_EmissiveMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_IsEmissive", DefaultMaterial__get_IsEmissive, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_NormalMap", DefaultMaterial__get_NormalMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_Offset", DefaultMaterial__get_Offset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Shininess", DefaultMaterial__get_Shininess, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_SpecularColor", DefaultMaterial__get_SpecularColor, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_SpecularMap", DefaultMaterial__get_SpecularMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_Tiling", DefaultMaterial__get_Tiling, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", DefaultMaterial__New_1, 0, true, DefaultMaterial__typeof()),
        ::uNewFunctionVoid("set_DiffuseColor", DefaultMaterial__set_DiffuseColor, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_DiffuseMap", DefaultMaterial__set_DiffuseMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("set_EmissiveColor", DefaultMaterial__set_EmissiveColor, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_EmissiveMap", DefaultMaterial__set_EmissiveMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("set_IsEmissive", DefaultMaterial__set_IsEmissive, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_NormalMap", DefaultMaterial__set_NormalMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("set_Offset", DefaultMaterial__set_Offset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Shininess", DefaultMaterial__set_Shininess, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_SpecularColor", DefaultMaterial__set_SpecularColor, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_SpecularMap", DefaultMaterial__set_SpecularMap, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("set_Tiling", DefaultMaterial__set_Tiling, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultMaterial___ObjInit_1(DefaultMaterial* __this)
{
    ::app::Fuse::Entities::Material___ObjInit(__this);
    __this->Tiling(::app::Uno::Float2__New_1(NULL, 1.0f));
    __this->DiffuseColor(::app::Uno::Float3__New_1(NULL, 1.0f));
    __this->SpecularColor(::app::Uno::Float3__New_1(NULL, 1.0f));
    __this->Shininess(6.0f);
}

::app::Uno::Float3 DefaultMaterial__get_DiffuseColor(DefaultMaterial* __this)
{
    return __this->_DiffuseColor;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_DiffuseMap(DefaultMaterial* __this)
{
    return __this->_DiffuseMap;
}

::app::Uno::Float3 DefaultMaterial__get_EmissiveColor(DefaultMaterial* __this)
{
    return __this->_EmissiveColor;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_EmissiveMap(DefaultMaterial* __this)
{
    return __this->_EmissiveMap;
}

bool DefaultMaterial__get_IsEmissive(DefaultMaterial* __this)
{
    return __this->_IsEmissive;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_NormalMap(DefaultMaterial* __this)
{
    return __this->_NormalMap;
}

::app::Uno::Float2 DefaultMaterial__get_Offset(DefaultMaterial* __this)
{
    return __this->_Offset;
}

float DefaultMaterial__get_Shininess(DefaultMaterial* __this)
{
    return __this->_Shininess;
}

::app::Uno::Float3 DefaultMaterial__get_SpecularColor(DefaultMaterial* __this)
{
    return __this->_SpecularColor;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_SpecularMap(DefaultMaterial* __this)
{
    return __this->_SpecularMap;
}

::app::Uno::Float2 DefaultMaterial__get_Tiling(DefaultMaterial* __this)
{
    return __this->_Tiling;
}

DefaultMaterial* DefaultMaterial__New_1(::uStatic* __this)
{
    DefaultMaterial* inst = (DefaultMaterial*)::uAllocObject(sizeof(DefaultMaterial), DefaultMaterial__typeof());
    inst->_ObjInit_1();
    return inst;
}

void DefaultMaterial__set_DiffuseColor(DefaultMaterial* __this, ::app::Uno::Float3 value)
{
    __this->_DiffuseColor = value;
}

void DefaultMaterial__set_DiffuseMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_DiffuseMap = value;
}

void DefaultMaterial__set_EmissiveColor(DefaultMaterial* __this, ::app::Uno::Float3 value)
{
    __this->_EmissiveColor = value;
}

void DefaultMaterial__set_EmissiveMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_EmissiveMap = value;
}

void DefaultMaterial__set_IsEmissive(DefaultMaterial* __this, bool value)
{
    __this->_IsEmissive = value;
}

void DefaultMaterial__set_NormalMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_NormalMap = value;
}

void DefaultMaterial__set_Offset(DefaultMaterial* __this, ::app::Uno::Float2 value)
{
    __this->_Offset = value;
}

void DefaultMaterial__set_Shininess(DefaultMaterial* __this, float value)
{
    __this->_Shininess = value;
}

void DefaultMaterial__set_SpecularColor(DefaultMaterial* __this, ::app::Uno::Float3 value)
{
    __this->_SpecularColor = value;
}

void DefaultMaterial__set_SpecularMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_SpecularMap = value;
}

void DefaultMaterial__set_Tiling(DefaultMaterial* __this, ::app::Uno::Float2 value)
{
    __this->_Tiling = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DirectArrayMeshIntersecter__uType* DirectArrayMeshIntersecter__typeof()
{
    static ::uStaticStrong<DirectArrayMeshIntersecter__uType*> type;
    if (type != NULL) return type;

    type = (DirectArrayMeshIntersecter__uType*)::uAllocClassType(sizeof(DirectArrayMeshIntersecter__uType), "Fuse.Entities.DirectArrayMeshIntersecter", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Entities::TriangleMeshIntersecter__typeof());
    type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))DirectArrayMeshIntersecter__GetTriangle;

    type->SetStrongRefs(
        "_positions", offsetof(DirectArrayMeshIntersecter, _positions));

    type->SetFields(1,
        ::uNewField("_positions", NULL, offsetof(DirectArrayMeshIntersecter, _positions), ::uGetArrayType(::app::Uno::Float3__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DirectArrayMeshIntersecter__New_1, 0, true, DirectArrayMeshIntersecter__typeof(), ::uGetArrayType(::app::Uno::Float3__typeof())));

    ::uRegisterType(type);
    return type;
}

void DirectArrayMeshIntersecter___ObjInit_1(DirectArrayMeshIntersecter* __this, ::uArray* positions)
{
    ::app::Fuse::Entities::TriangleMeshIntersecter___ObjInit(__this, ::uPtr< ::uArray*>(positions)->Length() / 3);

    if (positions == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("positions can not be null")));
    }

    __this->_positions = positions;
}

::app::Uno::Geometry::Triangle DirectArrayMeshIntersecter__GetTriangle(DirectArrayMeshIntersecter* __this, int t)
{
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(i), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(i + 1), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(i + 2));
}

DirectArrayMeshIntersecter* DirectArrayMeshIntersecter__New_1(::uStatic* __this, ::uArray* positions)
{
    DirectArrayMeshIntersecter* inst = (DirectArrayMeshIntersecter*)::uAllocObject(sizeof(DirectArrayMeshIntersecter), DirectArrayMeshIntersecter__typeof());
    inst->_ObjInit_1(positions);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DirectionalLight__uType* DirectionalLight__typeof()
{
    static ::uStaticStrong<DirectionalLight__uType*> type;
    if (type != NULL) return type;

    type = (DirectionalLight__uType*)::uAllocClassType(sizeof(DirectionalLight__uType), "Fuse.Entities.DirectionalLight", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::Light__typeof());
    type->__fp_Accept = (void(*)(::app::Fuse::Entities::Light*, ::uObject*))DirectionalLight__Accept;

    type->SetFunctions(3,
        ::uNewFunction("get_Box", DirectionalLight__get_Box, 0, false, ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction(".ctor", DirectionalLight__New_1, 0, true, DirectionalLight__typeof()),
        ::uNewFunctionVoid("set_Box", DirectionalLight__set_Box, 0, false, ::app::Uno::Geometry::Box__typeof()));

    ::uRegisterType(type);
    return type;
}

void DirectionalLight___ObjInit_2(DirectionalLight* __this)
{
    ::app::Fuse::Entities::Light___ObjInit_1(__this);
    __this->Box(::app::Uno::Geometry::Box__New_1(NULL, ::app::Uno::Float3__New_2(NULL, -100.0f, -100.0f, 0.0f), ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 5000.0f)));
}

void DirectionalLight__Accept(DirectionalLight* __this, ::uObject* visitor)
{
    ::app::Fuse::Entities::ILightVisitor::Visit(::uPtr< ::uObject*>(visitor), __this);
}

::app::Uno::Geometry::Box DirectionalLight__get_Box(DirectionalLight* __this)
{
    return __this->_Box;
}

DirectionalLight* DirectionalLight__New_1(::uStatic* __this)
{
    DirectionalLight* inst = (DirectionalLight*)::uAllocObject(sizeof(DirectionalLight), DirectionalLight__typeof());
    inst->_ObjInit_2();
    return inst;
}

void DirectionalLight__set_Box(DirectionalLight* __this, ::app::Uno::Geometry::Box value)
{
    __this->_Box = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Entity__uType* Entity__typeof()
{
    static ::uStaticStrong<Entity__uType*> type;
    if (type != NULL) return type;

    type = (Entity__uType*)::uAllocClassType(sizeof(Entity__uType), "Fuse.Entities.Entity", false, 1, 6, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Entity__Draw;
    type->__fp_get_HitTestBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))Entity__get_HitTestBounds;
    type->__fp_get_LocalBounds = (::app::Uno::Geometry::Box(*)(::app::Fuse::Node*))Entity__get_LocalBounds;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Entity__get_SubNodeCount;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Entity__GetSubNode;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Entity__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Entity__uType, __interface_0));

    type->SetStrongRefs(
        "_children", offsetof(Entity, _children),
        "_components", offsetof(Entity, _components),
        "_frustumComponent", offsetof(Entity, _frustumComponent),
        "_MeshRenderer", offsetof(Entity, _MeshRenderer),
        "ComponentDraw", offsetof(Entity, ComponentDraw),
        "ComponentHitTest", offsetof(Entity, ComponentHitTest));

    type->SetFields(3,
        ::uNewField("_children", NULL, offsetof(Entity, _children), ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity__typeof()),
        ::uNewField("_components", NULL, offsetof(Entity, _components), ::app::Uno::Collections::ObservableList__Fuse_Entities_Component__typeof()),
        ::uNewField("_frustumComponent", NULL, offsetof(Entity, _frustumComponent), ::app::Fuse::IFrustum__typeof()));

    type->SetFunctions(29,
        ::uNewFunctionVoid("add_ComponentDraw", Entity__add_ComponentDraw, 0, false, ::app::Fuse::DrawHandler__typeof()),
        ::uNewFunctionVoid("add_ComponentHitTest", Entity__add_ComponentHitTest, 0, false, ::app::Fuse::HitTestHandler__typeof()),
        ::uNewFunctionVoid("FindAllComponents", Entity__FindAllComponents__Fuse_Entities_MeshRenderer, 0, false, ::app::Uno::Action__Fuse_Entities_MeshRenderer__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("FindComponent", Entity__FindComponent__Fuse_IFrustum, 0, false, ::app::Fuse::IFrustum__typeof()),
        ::uNewFunction("FromModel", Entity__FromModel, 0, true, Entity__typeof(), ::app::Uno::Content::Models::Model__typeof()),
        ::uNewFunction("get_Children", Entity__get_Children, 0, false, ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof()),
        ::uNewFunction("get_Components", Entity__get_Components, 0, false, ::app::Uno::Collections::IList__Fuse_Entities_Component__typeof()),
        ::uNewFunction("get_Frustum", Entity__get_Frustum, 0, false, ::app::Fuse::Entities::Frustum__typeof()),
        ::uNewFunction("get_FrustumComponent", Entity__get_FrustumComponent, 0, false, ::app::Fuse::IFrustum__typeof()),
        ::uNewFunction("get_HasChildren", Entity__get_HasChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MeshRenderer", Entity__get_MeshRenderer, 0, false, ::app::Fuse::Entities::MeshRenderer__typeof()),
        ::uNewFunction("get_ParentEntity", Entity__get_ParentEntity, 0, false, Entity__typeof()),
        ::uNewFunction("get_Transform", Entity__get_Transform, 0, false, ::app::Fuse::Entities::Transform3D__typeof()),
        ::uNewFunction("get_WorldForward", Entity__get_WorldForward, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_WorldPosition", Entity__get_WorldPosition_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_WorldRight", Entity__get_WorldRight, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_WorldRotationQuaternion", Entity__get_WorldRotationQuaternion, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_WorldUp", Entity__get_WorldUp, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Entity__New_1, 0, true, Entity__typeof()),
        ::uNewFunction(".ctor", Entity__New_2, 0, true, Entity__typeof(), ::uGetArrayType(::app::Fuse::Entities::Component__typeof())),
        ::uNewFunctionVoid("OnChildAdded", Entity__OnChildAdded, 0, false, Entity__typeof()),
        ::uNewFunctionVoid("OnChildRemoved", Entity__OnChildRemoved, 0, false, Entity__typeof()),
        ::uNewFunctionVoid("OnComponentAdded", Entity__OnComponentAdded, 0, false, ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunctionVoid("OnComponentRemoved", Entity__OnComponentRemoved, 0, false, ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunctionVoid("remove_ComponentDraw", Entity__remove_ComponentDraw, 0, false, ::app::Fuse::DrawHandler__typeof()),
        ::uNewFunctionVoid("remove_ComponentHitTest", Entity__remove_ComponentHitTest, 0, false, ::app::Fuse::HitTestHandler__typeof()),
        ::uNewFunctionVoid("set_MeshRenderer", Entity__set_MeshRenderer, 0, false, ::app::Fuse::Entities::MeshRenderer__typeof()),
        ::uNewFunctionVoid("set_WorldPosition", Entity__set_WorldPosition, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_WorldRotationQuaternion", Entity__set_WorldRotationQuaternion, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Entity___ObjInit_1(Entity* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
}

void Entity___ObjInit_2(Entity* __this, ::uArray* initComponents)
{
    ::app::Fuse::Node___ObjInit(__this);

    if (initComponents != NULL)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(initComponents)->Length(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Entities_Component::Add(::uPtr< ::uObject*>(__this->Components()), ::uPtr< ::uArray*>(initComponents)->Item< ::app::Fuse::Entities::Component*>(i));
        }
    }
}

void Entity__add_ComponentDraw(Entity* __this, ::uDelegate* value)
{
    __this->ComponentDraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ComponentDraw, (::uDelegate*)value), ::app::Fuse::DrawHandler__typeof());
}

void Entity__add_ComponentHitTest(Entity* __this, ::uDelegate* value)
{
    __this->ComponentHitTest = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ComponentHitTest, (::uDelegate*)value), ::app::Fuse::HitTestHandler__typeof());
}

void Entity__Draw(Entity* __this, ::app::Fuse::DrawContext* dc)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ComponentDraw, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ComponentDraw)->InvokeVoid< ::uObject*, ::app::Fuse::DrawArgs*>((::uObject*)__this, ::app::Fuse::DrawArgs__New_2(NULL, dc));
    }

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count(); i++)
        {
            ::uPtr< Entity*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Item(i))->Draw(dc);
        }
    }
}

void Entity__FindAllComponents__Fuse_Entities_MeshRenderer(Entity* __this, ::uDelegate* callback, bool recursive)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Entities_Component::Count(::uPtr< ::uObject*>(__this->Components())); i++)
    {
        if (::uIs(::app::Uno::Collections::IList__Fuse_Entities_Component::Item(::uPtr< ::uObject*>(__this->Components()), i), ::app::Fuse::Entities::MeshRenderer__typeof()))
        {
            ::uPtr< ::uDelegate*>(callback)->InvokeVoid< ::app::Fuse::Entities::MeshRenderer*>(::uCast< ::app::Fuse::Entities::MeshRenderer*>(::app::Uno::Collections::IList__Fuse_Entities_Component::Item(::uPtr< ::uObject*>(__this->Components()), i), ::app::Fuse::Entities::MeshRenderer__typeof()));
        }
    }

    if (recursive && __this->HasChildren())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Count(::uPtr< ::uObject*>(__this->Children())); i++)
        {
            if (::uIs(::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(::uPtr< ::uObject*>(__this->Children()), i), Entity__typeof()))
            {
                ::uPtr< Entity*>(::uAs< Entity*>(::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(::uPtr< ::uObject*>(__this->Children()), i), Entity__typeof()))->FindAllComponents__Fuse_Entities_MeshRenderer(callback, recursive);
            }
        }
    }
}

::uObject* Entity__FindComponent__Fuse_IFrustum(Entity* __this)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Entities_Component::Count(::uPtr< ::uObject*>(__this->Components())); i++)
    {
        if (::uIs(::app::Uno::Collections::IList__Fuse_Entities_Component::Item(::uPtr< ::uObject*>(__this->Components()), i), ::app::Fuse::IFrustum__typeof()))
        {
            return (::uObject*)(::uObject*)::app::Uno::Collections::IList__Fuse_Entities_Component::Item(::uPtr< ::uObject*>(__this->Components()), i);
        }
    }

    return NULL;
}

Entity* Entity__FromModel(::uStatic* __this, ::app::Uno::Content::Models::Model* model)
{
    return ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilder*>(::app::Fuse::Entities::Internal::SceneGraphBuilder__New_1(NULL, NULL))->Build(model);
}

::uObject* Entity__get_Children(Entity* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Entity__typeof(), (const void*)Entity__OnChildAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Entity__typeof(), (const void*)Entity__OnChildRemoved, __this));
    }

    return (::uObject*)__this->_children;
}

::uObject* Entity__get_Components(Entity* __this)
{
    if (__this->_components == NULL)
    {
        __this->_components = ::app::Uno::Collections::ObservableList__Fuse_Entities_Component__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Component__typeof(), (const void*)Entity__OnComponentAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Component__typeof(), (const void*)Entity__OnComponentRemoved, __this));
    }

    return (::uObject*)__this->_components;
}

::app::Fuse::Entities::Frustum* Entity__get_Frustum(Entity* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*>(__this->_components)->Count(); i++)
    {
        if (::uIs(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*>(__this->_components)->Item(i), ::app::Fuse::Entities::Frustum__typeof()))
        {
            return ::uCast< ::app::Fuse::Entities::Frustum*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*>(__this->_components)->Item(i), ::app::Fuse::Entities::Frustum__typeof());
        }
    }

    return NULL;
}

::uObject* Entity__get_FrustumComponent(Entity* __this)
{
    if (__this->_frustumComponent == NULL)
    {
        __this->_frustumComponent = __this->FindComponent__Fuse_IFrustum();
    }

    return __this->_frustumComponent;
}

bool Entity__get_HasChildren(Entity* __this)
{
    return (__this->_children != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count() > 0);
}

::app::Fuse::NodeBounds* Entity__get_HitTestBounds(Entity* __this)
{
    return ::app::Fuse::NodeBounds__get_Infinite(NULL);
}

::app::Uno::Geometry::Box Entity__get_LocalBounds(Entity* __this)
{
    return ::app::Uno::Geometry::Box__New_1(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), ::app::Uno::Float3__New_1(NULL, 0.0f));
}

::app::Fuse::Entities::MeshRenderer* Entity__get_MeshRenderer(Entity* __this)
{
    return __this->_MeshRenderer;
}

Entity* Entity__get_ParentEntity(Entity* __this)
{
    return ::uAs< Entity*>(__this->Parent(), Entity__typeof());
}

int Entity__get_SubNodeCount(Entity* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Count(::uPtr< ::uObject*>(__this->Children()));
}

::app::Fuse::Entities::Transform3D* Entity__get_Transform(Entity* __this)
{
    for (int i = ::app::Uno::Collections::ICollection__Fuse_Transform::Count(::uPtr< ::uObject*>(__this->Transforms())); (i--) > 0; )
    {
        if (::uIs(::app::Uno::Collections::IList__Fuse_Transform::Item(::uPtr< ::uObject*>(__this->Transforms()), i), ::app::Fuse::Entities::Transform3D__typeof()))
        {
            return ::uCast< ::app::Fuse::Entities::Transform3D*>(::app::Uno::Collections::IList__Fuse_Transform::Item(::uPtr< ::uObject*>(__this->Transforms()), i), ::app::Fuse::Entities::Transform3D__typeof());
        }
    }

    return NULL;
}

::app::Uno::Float3 Entity__get_WorldForward(Entity* __this)
{
    return ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, -1.0f), __this->WorldTransform()));
}

::app::Uno::Float3 Entity__get_WorldPosition_1(Entity* __this)
{
    ::app::Uno::Float3 scale = ::app::Uno::Float3();
    ::app::Uno::Float3 translation = ::app::Uno::Float3();
    ::app::Uno::Float4 rotation = ::app::Uno::Float4();
    ::app::Uno::Matrix__Decompose(NULL, __this->WorldTransform(), &scale, &rotation, &translation);
    return translation;
}

::app::Uno::Float3 Entity__get_WorldRight(Entity* __this)
{
    return ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), __this->WorldTransform()));
}

::app::Uno::Float4 Entity__get_WorldRotationQuaternion(Entity* __this)
{
    ::app::Uno::Float3 scale = ::app::Uno::Float3();
    ::app::Uno::Float3 translation = ::app::Uno::Float3();
    ::app::Uno::Float4 rotation = ::app::Uno::Float4();
    ::app::Uno::Matrix__Decompose(NULL, __this->WorldTransform(), &scale, &rotation, &translation);
    return rotation;
}

::app::Uno::Float3 Entity__get_WorldUp(Entity* __this)
{
    return ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), __this->WorldTransform()));
}

::app::Fuse::Node* Entity__GetSubNode(Entity* __this, int index)
{
    return (::app::Fuse::Node*)::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

Entity* Entity__New_1(::uStatic* __this)
{
    Entity* inst = (Entity*)::uAllocObject(sizeof(Entity), Entity__typeof());
    inst->_ObjInit_1();
    return inst;
}

Entity* Entity__New_2(::uStatic* __this, ::uArray* initComponents)
{
    Entity* inst = (Entity*)::uAllocObject(sizeof(Entity), Entity__typeof());
    inst->_ObjInit_2(initComponents);
    return inst;
}

void Entity__OnChildAdded(Entity* __this, Entity* c)
{
    ::uPtr< Entity*>(c)->OnAdded((::app::Fuse::Node*)__this);
    __this->_frustumComponent = NULL;
}

void Entity__OnChildRemoved(Entity* __this, Entity* c)
{
    ::uPtr< Entity*>(c)->OnRemoved((::app::Fuse::Node*)__this);
    __this->_frustumComponent = NULL;
}

void Entity__OnComponentAdded(Entity* __this, ::app::Fuse::Entities::Component* c)
{
    ::uPtr< ::app::Fuse::Entities::Component*>(c)->Added(__this);
}

void Entity__OnComponentRemoved(Entity* __this, ::app::Fuse::Entities::Component* c)
{
    ::uPtr< ::app::Fuse::Entities::Component*>(c)->Removed(__this);
}

void Entity__OnHitTest(Entity* __this, ::app::Fuse::HitTestContext* htc)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ComponentHitTest, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ComponentHitTest)->InvokeVoid< ::uObject*, ::app::Fuse::HitTestContext*>((::uObject*)__this, htc);
    }

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count(); i++)
        {
            ::uPtr< Entity*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Item(i))->HitTest(htc);
        }
    }
}

void Entity__remove_ComponentDraw(Entity* __this, ::uDelegate* value)
{
    __this->ComponentDraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ComponentDraw, (::uDelegate*)value), ::app::Fuse::DrawHandler__typeof());
}

void Entity__remove_ComponentHitTest(Entity* __this, ::uDelegate* value)
{
    __this->ComponentHitTest = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ComponentHitTest, (::uDelegate*)value), ::app::Fuse::HitTestHandler__typeof());
}

void Entity__set_MeshRenderer(Entity* __this, ::app::Fuse::Entities::MeshRenderer* value)
{
    __this->_MeshRenderer = value;
}

void Entity__set_WorldPosition(Entity* __this, ::app::Uno::Float3 value)
{
    ::app::Uno::Float4x4 localToAbs = __this->WorldTransform();
    ::app::Uno::Float4x4 absToLocal = ::app::Uno::Matrix__Invert_2(NULL, localToAbs);
    ::app::Uno::Float4x4 localToParent = __this->LocalTransform();
    ::app::Uno::Float4x4 absToParent = ::app::Uno::Matrix__Mul_8(NULL, absToLocal, localToParent);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->Transform())->Position(::app::Uno::Vector__TransformCoordinate_1(NULL, value, absToParent));
}

void Entity__set_WorldRotationQuaternion(Entity* __this, ::app::Uno::Float4 value)
{
    ::app::Uno::Float4 parentToAbs = (__this->ParentEntity() != NULL) ? ::uPtr< Entity*>(__this->ParentEntity())->WorldRotationQuaternion() : ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f);
    ::app::Uno::Float4 absToParent = ::app::Uno::Vector__Normalize_2(NULL, ::app::Uno::Quaternion__Invert(NULL, parentToAbs));
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->Transform())->RotationQuaternion(::app::Uno::Quaternion__Mul(NULL, value, absToParent));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Entry__uType* Entry__typeof()
{
    static ::uStaticStrong<Entry__uType*> type;
    if (type != NULL) return type;

    type = (Entry__uType*)::uAllocStructType(sizeof(Entry__uType), "Fuse.Entities.Entry", sizeof(Entry), 0, 1, 0);

    type->SetStrongRefs(
        "Mesh", offsetof(Entry, Mesh));

    type->SetFields(3,
        ::uNewField("Mesh", NULL, offsetof(Entry, Mesh), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewField("World", NULL, offsetof(Entry, World), ::app::Uno::Float4x4__typeof()),
        ::uNewField("WorldInverse", NULL, offsetof(Entry, WorldInverse), ::app::Uno::Float4x4__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Entry__New_1, 0, true, Entry__typeof(), ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Entry___ObjInit(Entry* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse)
{
    __this->Mesh = m;
    __this->World = t;
    __this->WorldInverse = worldInverse;
}

Entry Entry__New_1(::uStatic* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse)
{
    Entry inst = ::uDefault< Entry>();
    inst._ObjInit(m, t, worldInverse);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnvironmentLight__uType* EnvironmentLight__typeof()
{
    static ::uStaticStrong<EnvironmentLight__uType*> type;
    if (type != NULL) return type;

    type = (EnvironmentLight__uType*)::uAllocClassType(sizeof(EnvironmentLight__uType), "Fuse.Entities.EnvironmentLight", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::Light__typeof());
    type->__fp_Accept = (void(*)(::app::Fuse::Entities::Light*, ::uObject*))EnvironmentLight__Accept;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", EnvironmentLight__New_1, 0, true, EnvironmentLight__typeof()));

    ::uRegisterType(type);
    return type;
}

void EnvironmentLight___ObjInit_2(EnvironmentLight* __this)
{
    ::app::Fuse::Entities::Light___ObjInit_1(__this);
}

void EnvironmentLight__Accept(EnvironmentLight* __this, ::uObject* visitor)
{
    ::app::Fuse::Entities::ILightVisitor::Visit_1(::uPtr< ::uObject*>(visitor), __this);
}

EnvironmentLight* EnvironmentLight__New_1(::uStatic* __this)
{
    EnvironmentLight* inst = (EnvironmentLight*)::uAllocObject(sizeof(EnvironmentLight), EnvironmentLight__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Frustum__uType* Frustum__typeof()
{
    static ::uStaticStrong<Frustum__uType*> type;
    if (type != NULL) return type;

    type = (Frustum__uType*)::uAllocClassType(sizeof(Frustum__uType), "Fuse.Entities.Frustum", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::Component__typeof());
    type->__fp_OnAdded = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Frustum__OnAdded;
    type->__fp_OnRemoved = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Frustum__OnRemoved;
    type->__interface_0.__fp_GetProjectionTransform = (::app::Uno::Float4x4(*)(void*, ::uObject*))Frustum__GetProjectionTransform;
    type->__interface_0.__fp_GetProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*, ::uObject*))Frustum__GetProjectionTransformInverse;
    type->__interface_0.__fp_GetViewTransform = (::app::Uno::Float4x4(*)(void*, ::uObject*))Frustum__GetViewTransform;
    type->__interface_0.__fp_GetViewTransformInverse = (::app::Uno::Float4x4(*)(void*, ::uObject*))Frustum__GetViewTransformInverse;
    type->__interface_0.__fp_GetDepthRange = (::app::Uno::Float2(*)(void*, ::uObject*))Frustum__GetDepthRange;
    type->__interface_0.__fp_GetWorldPosition = (::app::Uno::Float3(*)(void*, ::uObject*))Frustum__GetWorldPosition;

    type->SetInterfaces(
        ::app::Fuse::IFrustum__typeof(), offsetof(Frustum__uType, __interface_0));

    type->SetFields(5,
        ::uNewField("_aspect", NULL, offsetof(Frustum, _aspect), ::app::Uno::Float__typeof()),
        ::uNewField("_hasExplicitAspect", NULL, offsetof(Frustum, _hasExplicitAspect), ::app::Uno::Bool__typeof()),
        ::uNewField("fovRadians", NULL, offsetof(Frustum, fovRadians), ::app::Uno::Float__typeof()),
        ::uNewField("zFar", NULL, offsetof(Frustum, zFar), ::app::Uno::Float__typeof()),
        ::uNewField("zNear", NULL, offsetof(Frustum, zNear), ::app::Uno::Float__typeof()));

    type->SetFunctions(26,
        ::uNewFunction("get_ExplicitAspect", Frustum__get_ExplicitAspect, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_FovDegrees", Frustum__get_FovDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_FovRadians", Frustum__get_FovRadians, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_HasExplicitAspect", Frustum__get_HasExplicitAspect, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_InverseView", Frustum__get_InverseView, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_View", Frustum__get_View, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ZFar", Frustum__get_ZFar, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ZNear", Frustum__get_ZNear, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("GetDepthRange", Frustum__GetDepthRange, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetFrustumGeometry", Frustum__GetFrustumGeometry, 0, false, ::app::Uno::Geometry::Frustum__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("GetFrustumGeometry", Frustum__GetFrustumGeometry_1, 0, false, ::app::Uno::Geometry::Frustum__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunction("GetProjectionTransform", Frustum__GetProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetProjectionTransformInverse", Frustum__GetProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetViewTransform", Frustum__GetViewTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetViewTransformInverse", Frustum__GetViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetWorldPosition", Frustum__GetWorldPosition, 0, false, ::app::Uno::Float3__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction(".ctor", Frustum__New_1, 0, true, Frustum__typeof()),
        ::uNewFunction(".ctor", Frustum__New_2, 0, true, Frustum__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Reset", Frustum__Reset, 0, false),
        ::uNewFunctionVoid("ResetExplicitAspect", Frustum__ResetExplicitAspect, 0, false),
        ::uNewFunctionVoid("set_ExplicitAspect", Frustum__set_ExplicitAspect, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_FovDegrees", Frustum__set_FovDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_FovRadians", Frustum__set_FovRadians, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ZFar", Frustum__set_ZFar, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ZNear", Frustum__set_ZNear, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("ViewportAspect", Frustum__ViewportAspect, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::IViewport__typeof()));

    ::uRegisterType(type);
    return type;
}

void Frustum___ObjInit_1(Frustum* __this)
{
    __this->_aspect = 1.0f;
    ::app::Fuse::Entities::Component___ObjInit(__this);
    __this->FovRadians(0.7853982f);
    __this->ZNear(1.0f);
    __this->ZFar(1000.0f);
}

void Frustum___ObjInit_2(Frustum* __this, float fovRadians, float znear, float zfar)
{
    __this->_aspect = 1.0f;
    ::app::Fuse::Entities::Component___ObjInit(__this);
    __this->FovRadians(fovRadians);
    __this->ZNear(znear);
    __this->ZFar(zfar);
}

float Frustum__get_ExplicitAspect(Frustum* __this)
{
    return __this->_aspect;
}

float Frustum__get_FovDegrees(Frustum* __this)
{
    return (__this->FovRadians() / 3.14159274f) * 180.0f;
}

float Frustum__get_FovRadians(Frustum* __this)
{
    return __this->fovRadians;
}

bool Frustum__get_HasExplicitAspect(Frustum* __this)
{
    return __this->_hasExplicitAspect;
}

::app::Uno::Float4x4 Frustum__get_InverseView(Frustum* __this)
{
    return ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform();
}

::app::Uno::Float4x4 Frustum__get_View(Frustum* __this)
{
    return ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransformInverse();
}

float Frustum__get_ZFar(Frustum* __this)
{
    return __this->zFar;
}

float Frustum__get_ZNear(Frustum* __this)
{
    return __this->zNear;
}

::app::Uno::Float2 Frustum__GetDepthRange(Frustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Float2__New_2(NULL, __this->ZNear(), __this->ZFar());
}

::app::Uno::Geometry::Frustum Frustum__GetFrustumGeometry(Frustum* __this, float aspect)
{
    return __this->GetFrustumGeometry_1(aspect, ::app::Uno::Rect__New_1(NULL, -1.0f, 1.0f, 1.0f, -1.0f));
}

::app::Uno::Geometry::Frustum Frustum__GetFrustumGeometry_1(Frustum* __this, float aspect, ::app::Uno::Rect rect)
{
    ::app::Uno::Float3 position = ::app::Uno::Vector__TransformCoordinate_1(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), __this->InverseView());
    ::app::Uno::Float3 xAxis = ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), __this->InverseView());
    ::app::Uno::Float3 yAxis = ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), __this->InverseView());
    ::app::Uno::Float3 zAxis = ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), __this->InverseView());
    float yScale = ::app::Uno::Math__Tan_1(NULL, __this->fovRadians * 0.5f);
    float xScale = yScale * aspect;
    float halfWidthNear = __this->zNear * xScale;
    float halfHeightNear = __this->zNear * yScale;
    ::app::Uno::Float3 fc = ::app::Uno::Float3__op_Addition_2(NULL, position, ::app::Uno::Float3__op_Multiply_1(NULL, zAxis, __this->zFar));
    ::app::Uno::Float3 nc = ::app::Uno::Float3__op_Addition_2(NULL, position, ::app::Uno::Float3__op_Multiply_1(NULL, zAxis, __this->zNear));
    ::app::Uno::Geometry::Frustum result = ::app::Uno::Geometry::Frustum();
    result.Near = ::app::Uno::Geometry::Plane__New_3(NULL, nc, ::app::Uno::Float3__op_UnaryNegation(NULL, zAxis));
    result.Far = ::app::Uno::Geometry::Plane__New_3(NULL, fc, zAxis);
    result.Left = ::app::Uno::Geometry::Plane__New_3(NULL, position, ::app::Uno::Vector__Cross(NULL, ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, nc, ::app::Uno::Float3__op_Multiply_1(NULL, xAxis, halfWidthNear * rect.Left)), position)), yAxis));
    result.Bottom = ::app::Uno::Geometry::Plane__New_3(NULL, position, ::app::Uno::Vector__Cross(NULL, ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, ::app::Uno::Float3__op_Addition_2(NULL, nc, ::app::Uno::Float3__op_Multiply_1(NULL, yAxis, halfHeightNear * rect.Bottom)), position)), xAxis));
    result.Top = ::app::Uno::Geometry::Plane__New_3(NULL, position, ::app::Uno::Vector__Cross(NULL, xAxis, ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, ::app::Uno::Float3__op_Addition_2(NULL, nc, ::app::Uno::Float3__op_Multiply_1(NULL, yAxis, halfHeightNear * rect.Top)), position))));
    result.Right = ::app::Uno::Geometry::Plane__New_3(NULL, position, ::app::Uno::Vector__Cross(NULL, yAxis, ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, nc, ::app::Uno::Float3__op_Multiply_1(NULL, xAxis, halfWidthNear * rect.Right)), position))));
    result.Normalize();
    result.Near.Normal = ::app::Uno::Float3__op_Multiply_1(NULL, result.Near.Normal, -1.0f);
    result.Near.D = result.Near.D * -1.0f;
    return result;
}

::app::Uno::Float4x4 Frustum__GetProjectionTransform(Frustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Matrix__PerspectiveRH(NULL, __this->FovRadians(), __this->ViewportAspect(viewport), __this->ZNear(), __this->ZFar());
}

::app::Uno::Float4x4 Frustum__GetProjectionTransformInverse(Frustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Matrix__Invert_2(NULL, __this->GetProjectionTransform(viewport));
}

::app::Uno::Float4x4 Frustum__GetViewTransform(Frustum* __this, ::uObject* viewport)
{
    return __this->View();
}

::app::Uno::Float4x4 Frustum__GetViewTransformInverse(Frustum* __this, ::uObject* viewport)
{
    return __this->InverseView();
}

::app::Uno::Float3 Frustum__GetWorldPosition(Frustum* __this, ::uObject* viewport)
{
    return ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldPosition_1();
}

Frustum* Frustum__New_1(::uStatic* __this)
{
    Frustum* inst = (Frustum*)::uAllocObject(sizeof(Frustum), Frustum__typeof());
    inst->_ObjInit_1();
    return inst;
}

Frustum* Frustum__New_2(::uStatic* __this, float fovRadians, float znear, float zfar)
{
    Frustum* inst = (Frustum*)::uAllocObject(sizeof(Frustum), Frustum__typeof());
    inst->_ObjInit_2(fovRadians, znear, zfar);
    return inst;
}

void Frustum__OnAdded(Frustum* __this, ::app::Fuse::Entities::Entity* e)
{
}

void Frustum__OnRemoved(Frustum* __this, ::app::Fuse::Entities::Entity* e)
{
}

void Frustum__Reset(Frustum* __this)
{
    __this->FovRadians(0.7853982f);
    __this->ZNear(1.0f);
    __this->ZFar(1000.0f);
}

void Frustum__ResetExplicitAspect(Frustum* __this)
{
    __this->_hasExplicitAspect = false;
}

void Frustum__set_ExplicitAspect(Frustum* __this, float value)
{
    __this->_aspect = value;
    __this->_hasExplicitAspect = true;
}

void Frustum__set_FovDegrees(Frustum* __this, float value)
{
    __this->FovRadians((value / 180.0f) * 3.14159274f);
}

void Frustum__set_FovRadians(Frustum* __this, float value)
{
    __this->fovRadians = value;
}

void Frustum__set_ZFar(Frustum* __this, float value)
{
    __this->zFar = value;
}

void Frustum__set_ZNear(Frustum* __this, float value)
{
    __this->zNear = value;
}

float Frustum__ViewportAspect(Frustum* __this, ::uObject* viewport)
{
    return __this->HasExplicitAspect() ? __this->ExplicitAspect() : (::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)).X / ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)).Y);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ILightVisitor__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Entities.ILightVisitor");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndexedArrayMeshIntersecter__uType* IndexedArrayMeshIntersecter__typeof()
{
    static ::uStaticStrong<IndexedArrayMeshIntersecter__uType*> type;
    if (type != NULL) return type;

    type = (IndexedArrayMeshIntersecter__uType*)::uAllocClassType(sizeof(IndexedArrayMeshIntersecter__uType), "Fuse.Entities.IndexedArrayMeshIntersecter", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Entities::TriangleMeshIntersecter__typeof());
    type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))IndexedArrayMeshIntersecter__GetTriangle;

    type->SetStrongRefs(
        "_indices", offsetof(IndexedArrayMeshIntersecter, _indices),
        "_positions", offsetof(IndexedArrayMeshIntersecter, _positions));

    type->SetFields(2,
        ::uNewField("_indices", NULL, offsetof(IndexedArrayMeshIntersecter, _indices), ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("_positions", NULL, offsetof(IndexedArrayMeshIntersecter, _positions), ::uGetArrayType(::app::Uno::Float3__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IndexedArrayMeshIntersecter__New_1, 0, true, IndexedArrayMeshIntersecter__typeof(), ::uGetArrayType(::app::Uno::Float3__typeof()), ::uGetArrayType(::app::Uno::Int__typeof())));

    ::uRegisterType(type);
    return type;
}

void IndexedArrayMeshIntersecter___ObjInit_1(IndexedArrayMeshIntersecter* __this, ::uArray* positions, ::uArray* indices)
{
    ::app::Fuse::Entities::TriangleMeshIntersecter___ObjInit(__this, ::uPtr< ::uArray*>(indices)->Length() / 3);

    if (positions == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("positions can not be null")));
    }

    if (indices == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("indices can not be null")));
    }

    __this->_positions = positions;
    __this->_indices = indices;
}

::app::Uno::Geometry::Triangle IndexedArrayMeshIntersecter__GetTriangle(IndexedArrayMeshIntersecter* __this, int t)
{
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(::uPtr< ::uArray*>(__this->_indices)->Item< int>(i)), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(::uPtr< ::uArray*>(__this->_indices)->Item< int>(i + 1)), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(::uPtr< ::uArray*>(__this->_indices)->Item< int>(i + 2)));
}

IndexedArrayMeshIntersecter* IndexedArrayMeshIntersecter__New_1(::uStatic* __this, ::uArray* positions, ::uArray* indices)
{
    IndexedArrayMeshIntersecter* inst = (IndexedArrayMeshIntersecter*)::uAllocObject(sizeof(IndexedArrayMeshIntersecter), IndexedArrayMeshIntersecter__typeof());
    inst->_ObjInit_1(positions, indices);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Light__uType* Light__typeof()
{
    static ::uStaticStrong<Light__uType*> type;
    if (type != NULL) return type;

    type = (Light__uType*)::uAllocClassType(sizeof(Light__uType), "Fuse.Entities.Light", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::Component__typeof());
    type->__fp_Accept = Light__Accept;
    type->__fp_OnAdded = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Light__OnAdded;
    type->__fp_OnRemoved = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Light__OnRemoved;

    type->SetFields(1,
        ::uNewField("showSprite", NULL, offsetof(Light, showSprite), ::app::Uno::Bool__typeof()));

    type->SetFunctions(17,
        ::uNewFunctionVoid("Accept", type->__fp_Accept, offsetof(Light__uType, __fp_Accept), false, ::app::Fuse::Entities::ILightVisitor__typeof()),
        ::uNewFunction("get_CastShadow", Light__get_CastShadow, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Color", Light__get_Color, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_Multiplier", Light__get_Multiplier, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Range", Light__get_Range, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ShadowMapDepthBias", Light__get_ShadowMapDepthBias, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ShadowMapNearPlane", Light__get_ShadowMapNearPlane, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ShadowMapResolution", Light__get_ShadowMapResolution, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ShowDesignerSprite", Light__get_ShowDesignerSprite, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_CastShadow", Light__set_CastShadow, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Color", Light__set_Color, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_Multiplier", Light__set_Multiplier, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Range", Light__set_Range, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ShadowMapDepthBias", Light__set_ShadowMapDepthBias, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ShadowMapNearPlane", Light__set_ShadowMapNearPlane, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ShadowMapResolution", Light__set_ShadowMapResolution, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_ShowDesignerSprite", Light__set_ShowDesignerSprite, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Light___ObjInit_1(Light* __this)
{
    __this->showSprite = true;
    ::app::Fuse::Entities::Component___ObjInit(__this);
    __this->Color(::app::Uno::Float3__New_2(NULL, 1.0f, 1.0f, 1.0f));
    __this->Multiplier(1.0f);
    __this->ShadowMapResolution(1024);
    __this->ShadowMapDepthBias(0.5f);
    __this->ShadowMapNearPlane(10.0f);
}

void Light__Accept(Light* __this, ::uObject* visitor)
{
    ::app::Fuse::Entities::ILightVisitor::Visit_2(::uPtr< ::uObject*>(visitor), __this);
}

bool Light__get_CastShadow(Light* __this)
{
    return __this->_CastShadow;
}

::app::Uno::Float3 Light__get_Color(Light* __this)
{
    return __this->_Color;
}

float Light__get_Multiplier(Light* __this)
{
    return __this->_Multiplier;
}

float Light__get_Range(Light* __this)
{
    return __this->_Range;
}

float Light__get_ShadowMapDepthBias(Light* __this)
{
    return __this->_ShadowMapDepthBias;
}

float Light__get_ShadowMapNearPlane(Light* __this)
{
    return __this->_ShadowMapNearPlane;
}

int Light__get_ShadowMapResolution(Light* __this)
{
    return __this->_ShadowMapResolution;
}

bool Light__get_ShowDesignerSprite(Light* __this)
{
    return __this->showSprite;
}

void Light__OnAdded(Light* __this, ::app::Fuse::Entities::Entity* e)
{
}

void Light__OnRemoved(Light* __this, ::app::Fuse::Entities::Entity* e)
{
}

void Light__set_CastShadow(Light* __this, bool value)
{
    __this->_CastShadow = value;
}

void Light__set_Color(Light* __this, ::app::Uno::Float3 value)
{
    __this->_Color = value;
}

void Light__set_Multiplier(Light* __this, float value)
{
    __this->_Multiplier = value;
}

void Light__set_Range(Light* __this, float value)
{
    __this->_Range = value;
}

void Light__set_ShadowMapDepthBias(Light* __this, float value)
{
    __this->_ShadowMapDepthBias = value;
}

void Light__set_ShadowMapNearPlane(Light* __this, float value)
{
    __this->_ShadowMapNearPlane = value;
}

void Light__set_ShadowMapResolution(Light* __this, int value)
{
    __this->_ShadowMapResolution = value;
}

void Light__set_ShowDesignerSprite(Light* __this, bool value)
{
    __this->showSprite = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Material__uType* Material__typeof()
{
    static ::uStaticStrong<Material__uType*> type;
    if (type != NULL) return type;

    type = (Material__uType*)::uAllocClassType(sizeof(Material__uType), "Fuse.Entities.Material", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction("Draw", Material__Draw, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_IsBatchable", Material__get_IsBatchable, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Material___ObjInit(Material* __this)
{
}

bool Material__Draw(Material* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 transform)
{
    return false;
}

bool Material__get_IsBatchable(Material* __this)
{
    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Mesh__uType* Mesh__typeof()
{
    static ::uStaticStrong<Mesh__uType*> type;
    if (type != NULL) return type;

    type = (Mesh__uType*)::uAllocClassType(sizeof(Mesh__uType), "Fuse.Entities.Mesh", false, 1, 3, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Mesh__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Mesh__uType, __interface_0));

    type->SetStrongRefs(
        "_drawable", offsetof(Mesh, _drawable),
        "batcher", offsetof(Mesh, batcher),
        "batches", offsetof(Mesh, batches));

    type->SetFields(8,
        ::uNewField("_drawable", NULL, offsetof(Mesh, _drawable), ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewField("_meshBox", NULL, offsetof(Mesh, _meshBox), ::app::Uno::Geometry::Box__typeof()),
        ::uNewField("_meshBoxDirty", NULL, offsetof(Mesh, _meshBoxDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("_meshSphere", NULL, offsetof(Mesh, _meshSphere), ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewField("_meshSphereDirty", NULL, offsetof(Mesh, _meshSphereDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("batcher", NULL, offsetof(Mesh, batcher), ::app::Fuse::Drawing::Batching::MeshBatcher__typeof()),
        ::uNewField("batches", NULL, offsetof(Mesh, batches), ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())),
        ::uNewField("isDirty", NULL, offsetof(Mesh, isDirty), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Dispose", Mesh__Dispose, 0, false),
        ::uNewFunctionVoid("Flush", Mesh__Flush, 0, false),
        ::uNewFunction("get_Batches", Mesh__get_Batches, 0, false, ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())),
        ::uNewFunction("get_BoundingBox", Mesh__get_BoundingBox, 0, false, ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("get_BoundingSphere", Mesh__get_BoundingSphere, 0, false, ::app::Uno::Geometry::Sphere__typeof()),
        ::uNewFunction("get_Drawable", Mesh__get_Drawable, 0, false, ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewFunction("get_FirstBatch", Mesh__get_FirstBatch, 0, false, ::app::Fuse::Drawing::Batching::Batch__typeof()),
        ::uNewFunction("get_ModelMesh", Mesh__get_ModelMesh, 0, false, ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunctionVoid("Invalidate", Mesh__Invalidate, 0, false),
        ::uNewFunction(".ctor", Mesh__New_1, 0, true, Mesh__typeof(), ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewFunction(".ctor", Mesh__New_2, 0, true, Mesh__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()));

    ::uRegisterType(type);
    return type;
}

void Mesh___ObjInit(Mesh* __this, ::app::Uno::Content::Models::ModelDrawable* modelDrawable)
{
    __this->_meshBoxDirty = true;
    __this->isDirty = true;
    __this->_meshSphereDirty = true;
    __this->_drawable = modelDrawable;
}

void Mesh___ObjInit_1(Mesh* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh)
{
    __this->_meshBoxDirty = true;
    __this->isDirty = true;
    __this->_meshSphereDirty = true;
    __this->_ObjInit(::app::Uno::Content::Models::ModelDrawable__New_1(NULL, modelMesh, NULL));
}

void Mesh__Dispose(Mesh* __this)
{
}

void Mesh__Flush(Mesh* __this)
{
    ::uArray* array_123;

    if (!__this->isDirty)
    {
        return;
    }

    if (((__this->ModelMesh() != NULL) && (::uPtr< ::app::Uno::Content::Models::ModelMesh*>(__this->ModelMesh())->Indices() != NULL)) && (::uPtr< ::app::Uno::Content::Models::IndexArray*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(__this->ModelMesh())->Indices())->Type() == 4))
    {
        __this->batcher = ::app::Fuse::Drawing::Batching::MeshBatcher__New_1(NULL);
        ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(__this->batcher)->AddMesh(__this->ModelMesh());
        ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(__this->batcher)->Flush();
        __this->batches = NULL;
    }
    else
    {
        __this->batcher = NULL;
        __this->batches = (array_123 = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(0) = ::app::Fuse::Drawing::Batching::BatchHelpers__CreateSingleBatch(NULL, __this->ModelMesh()), array_123);
    }

    __this->isDirty = false;
    __this->_meshBoxDirty = true;
    __this->_meshSphereDirty = true;
}

::uArray* Mesh__get_Batches(Mesh* __this)
{
    if (__this->isDirty)
    {
        __this->Flush();
    }

    ::uArray* ind_124 = __this->batches;
    return (ind_124 != NULL) ? ind_124 : ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Batching_Batch(NULL, ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(__this->batcher)->Batches());
}

::app::Uno::Geometry::Box Mesh__get_BoundingBox(Mesh* __this)
{
    if (__this->_meshBoxDirty)
    {
        __this->_meshBox = ::app::Fuse::Entities::ModelMeshHelpers__CalculateAABB(NULL, __this->ModelMesh());
        __this->_meshBoxDirty = false;
    }

    return __this->_meshBox;
}

::app::Uno::Geometry::Sphere Mesh__get_BoundingSphere(Mesh* __this)
{
    if (__this->_meshSphereDirty)
    {
        __this->_meshSphere = ::app::Fuse::Entities::ModelMeshHelpers__CalculateBoundingSphere(NULL, __this->ModelMesh());
        __this->_meshSphereDirty = false;
    }

    return __this->_meshSphere;
}

::app::Uno::Content::Models::ModelDrawable* Mesh__get_Drawable(Mesh* __this)
{
    return __this->_drawable;
}

::app::Fuse::Drawing::Batching::Batch* Mesh__get_FirstBatch(Mesh* __this)
{
    return ::uPtr< ::uArray*>(__this->Batches())->Item< ::app::Fuse::Drawing::Batching::Batch*>(0);
}

::app::Uno::Content::Models::ModelMesh* Mesh__get_ModelMesh(Mesh* __this)
{
    return ::uPtr< ::app::Uno::Content::Models::ModelDrawable*>(__this->_drawable)->Mesh();
}

void Mesh__Invalidate(Mesh* __this)
{
    __this->isDirty = true;
}

Mesh* Mesh__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelDrawable* modelDrawable)
{
    Mesh* inst = (Mesh*)::uAllocObject(sizeof(Mesh), Mesh__typeof());
    inst->_ObjInit(modelDrawable);
    return inst;
}

Mesh* Mesh__New_2(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh)
{
    Mesh* inst = (Mesh*)::uAllocObject(sizeof(Mesh), Mesh__typeof());
    inst->_ObjInit_1(modelMesh);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< MeshBatchingEngine*> MeshBatchingEngine___singleton;

MeshBatchingEngine__uType* MeshBatchingEngine__typeof()
{
    static ::uStaticStrong<MeshBatchingEngine__uType*> type;
    if (type != NULL) return type;

    type = (MeshBatchingEngine__uType*)::uAllocClassType(sizeof(MeshBatchingEngine__uType), "Fuse.Entities.MeshBatchingEngine", false, 1, 10, 0);

    type->__interface_0.__fp_Flush = (void(*)(void*, ::app::Fuse::DrawContext*))MeshBatchingEngine__Flush;

    type->SetInterfaces(
        ::app::Fuse::IFlush__typeof(), offsetof(MeshBatchingEngine__uType, __interface_0));

    type->SetStrongRefs(
        "_draw_3d7404f9._compiledProgram", offsetof(MeshBatchingEngine, _draw_3d7404f9._compiledProgram),
        "_draw_3d7404f9._constValues", offsetof(MeshBatchingEngine, _draw_3d7404f9._constValues),
        "_draw_3d7404f9._Program", offsetof(MeshBatchingEngine, _draw_3d7404f9._Program),
        "_draw_e92d1425._compiledProgram", offsetof(MeshBatchingEngine, _draw_e92d1425._compiledProgram),
        "_draw_e92d1425._constValues", offsetof(MeshBatchingEngine, _draw_e92d1425._constValues),
        "_draw_e92d1425._Program", offsetof(MeshBatchingEngine, _draw_e92d1425._Program),
        "batchers", offsetof(MeshBatchingEngine, batchers),
        "drawLists", offsetof(MeshBatchingEngine, drawLists),
        "normalArray", offsetof(MeshBatchingEngine, normalArray),
        "worldArray", offsetof(MeshBatchingEngine, worldArray));

    type->SetFields(5,
        ::uNewField("_singleton", &MeshBatchingEngine___singleton, 0, MeshBatchingEngine__typeof()),
        ::uNewField("batchers", NULL, offsetof(MeshBatchingEngine, batchers), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()),
        ::uNewField("drawLists", NULL, offsetof(MeshBatchingEngine, drawLists), ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()),
        ::uNewField("normalArray", NULL, offsetof(MeshBatchingEngine, normalArray), ::uGetArrayType(::app::Uno::Float4x4__typeof())),
        ::uNewField("worldArray", NULL, offsetof(MeshBatchingEngine, worldArray), ::uGetArrayType(::app::Uno::Float4x4__typeof())));

    type->SetFunctions(12,
        ::uNewFunctionVoid("Draw", MeshBatchingEngine__Draw, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunctionVoid("DrawBatch", MeshBatchingEngine__DrawBatch, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Material__typeof(), ::app::Fuse::Drawing::Batching::Batch__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunctionVoid("DrawBatched", MeshBatchingEngine__DrawBatched, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Material__typeof(), ::app::Fuse::Drawing::Batching::MeshBatcher__typeof(), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()),
        ::uNewFunctionVoid("DrawIndividual", MeshBatchingEngine__DrawIndividual, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Material__typeof(), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()),
        ::uNewFunctionVoid("DrawList", MeshBatchingEngine__DrawList, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Material__typeof(), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()),
        ::uNewFunctionVoid("DrawMesh", MeshBatchingEngine__DrawMesh, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Material__typeof(), ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("FindOrCreateBatcher", MeshBatchingEngine__FindOrCreateBatcher, 0, false, ::app::Fuse::Drawing::Batching::MeshBatcher__typeof(), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunctionVoid("Flush", MeshBatchingEngine__Flush, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunction("get_Singleton", MeshBatchingEngine__get_Singleton, 0, true, MeshBatchingEngine__typeof()),
        ::uNewFunction("MeshVertexCount", MeshBatchingEngine__MeshVertexCount, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunction(".ctor", MeshBatchingEngine__New_1, 0, true, MeshBatchingEngine__typeof()),
        ::uNewFunctionVoid("PrepareMesh", MeshBatchingEngine__PrepareMesh, 0, false, ::app::Fuse::Entities::Mesh__typeof()));

    ::uRegisterType(type);
    return type;
}

void MeshBatchingEngine___ObjInit(MeshBatchingEngine* __this)
{
    __this->drawLists = ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL);
    __this->batchers = ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(NULL);
    __this->worldArray = ::uNewArray(::app::Uno::Float4x4__typeof(), 16);
    __this->normalArray = ::uNewArray(::app::Uno::Float4x4__typeof(), 16);
    __this->init_DrawCalls();
}

void MeshBatchingEngine__Draw(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 transform, ::app::Fuse::Entities::Material* material)
{
    if (!::uPtr< ::app::Fuse::Entities::Material*>(material)->IsBatchable())
    {
        __this->Flush(dc);
    }

    ::app::Uno::Collections::List__Fuse_Entities_Entry* list;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->TryGetValue(material, &list))
    {
        list = ::app::Uno::Collections::List__Fuse_Entities_Entry__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->Add(material, list);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(list)->Add(::app::Fuse::Entities::Entry__New_1(NULL, mesh, transform, ::app::Uno::Matrix__Invert_2(NULL, transform)));
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->AddFlushListener((::uObject*)__this);
}

void MeshBatchingEngine__DrawBatch(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::Batch* batch, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse)
{
    if (::uIs(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))
    {
        {
            __this->_draw_e92d1425.Const(0, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap() != NULL);
            __this->_draw_e92d1425.Const(1, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap() != NULL);
            __this->_draw_e92d1425.Const(2, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap() != NULL);
            __this->_draw_e92d1425.Use();
            __this->_draw_e92d1425.Attrib_1(3, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
            __this->_draw_e92d1425.Attrib_1(4, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->StrideInBytes(), 0);
            __this->_draw_e92d1425.Attrib_1(5, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->StrideInBytes(), 0);
            __this->_draw_e92d1425.Attrib_1(6, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->StrideInBytes(), 0);
            __this->_draw_e92d1425.Uniform_12(7, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Tiling());
            __this->_draw_e92d1425.Uniform_12(8, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Offset());
            __this->_draw_e92d1425.Uniform_14(9, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseColor());
            __this->_draw_e92d1425.Uniform_14(10, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularColor());
            __this->_draw_e92d1425.Uniform_17(11, world);
            __this->_draw_e92d1425.Uniform_14(12, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewOrigin(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 100.0f));
            __this->_draw_e92d1425.Uniform_11(13, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Shininess());
            __this->_draw_e92d1425.Uniform_17(14, ::app::Uno::Matrix__Mul_8(NULL, world, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Matrix__Mul_8(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL))));
            __this->_draw_e92d1425.Uniform_17(15, ::app::Uno::Matrix__Transpose_2(NULL, worldInverse));
            __this->_draw_e92d1425.Sampler_2(16, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap());
            __this->_draw_e92d1425.Sampler_2(17, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap());
            __this->_draw_e92d1425.Sampler_2(18, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap());
            __this->_draw_e92d1425.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
        }
    }
}

void MeshBatchingEngine__DrawBatched(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::MeshBatcher* batcher, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries)
{
    ::uArray* array_129;
    ::uArray* array_130;

    for (int k = 0; k < 16; k++)
    {
        ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(k) = ::app::Uno::Float4x4__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    int bc = 0;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Count(); i++)
    {
        ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(bc) = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(i).World;
        ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(bc) = entries->Item(i).WorldInverse;
        bc++;

        if ((bc >= (::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(batcher)->EntryCount() - 1)) || (i == (entries->Count() - 1)))
        {
            ::app::Fuse::Drawing::Batching::Batch* batch = ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch(NULL, ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(batcher)->Batches());

            if (batch != NULL)
            {
                int vc = bc * __this->MeshVertexCount(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(0).Mesh);

                if (::uIs(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))
                {
                    {
                        __this->_draw_3d7404f9.Const(0, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap() != NULL);
                        __this->_draw_3d7404f9.Const(1, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap() != NULL);
                        __this->_draw_3d7404f9.Const(2, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap() != NULL);
                        __this->_draw_3d7404f9.Use();
                        __this->_draw_3d7404f9.Attrib_1(3, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
                        __this->_draw_3d7404f9.Attrib_1(4, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->StrideInBytes(), 0);
                        __this->_draw_3d7404f9.Attrib_1(5, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->StrideInBytes(), 0);
                        __this->_draw_3d7404f9.Attrib_1(6, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->StrideInBytes(), 0);
                        __this->_draw_3d7404f9.Attrib_1(7, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->StrideInBytes(), 0);
                        __this->_draw_3d7404f9.Uniform(8, (array_129 = ::uNewArray(::app::Uno::Float4x4__typeof(), 16), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(0) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(0), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(1) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(1), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(2) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(2), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(3) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(3), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(4) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(4), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(5) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(5), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(6) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(6), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(7) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(7), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(8) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(8), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(9) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(9), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(10) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(10), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(11) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(11), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(12) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(12), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(13) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(13), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(14) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(14), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(15) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(15), array_129));
                        __this->_draw_3d7404f9.Uniform_12(9, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Tiling());
                        __this->_draw_3d7404f9.Uniform_12(10, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Offset());
                        __this->_draw_3d7404f9.Uniform_14(11, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseColor());
                        __this->_draw_3d7404f9.Uniform(12, (array_130 = ::uNewArray(::app::Uno::Float4x4__typeof(), 16), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(0) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(0), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(1) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(1), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(2) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(2), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(3) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(3), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(4) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(4), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(5) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(5), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(6) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(6), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(7) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(7), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(8) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(8), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(9) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(9), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(10) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(10), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(11) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(11), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(12) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(12), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(13) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(13), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(14) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(14), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(15) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(15), array_130));
                        __this->_draw_3d7404f9.Uniform_14(13, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularColor());
                        __this->_draw_3d7404f9.Uniform_14(14, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewOrigin(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 100.0f));
                        __this->_draw_3d7404f9.Uniform_11(15, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Shininess());
                        __this->_draw_3d7404f9.Uniform_17(16, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Matrix__Mul_8(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL)));
                        __this->_draw_3d7404f9.Sampler_2(17, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap());
                        __this->_draw_3d7404f9.Sampler_2(18, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap());
                        __this->_draw_3d7404f9.Sampler_2(19, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap());
                        __this->_draw_3d7404f9.Draw(vc, batch->IndexType(), batch->IndexBuffer());
                    }
                }
            }

            bc = 0;

            for (int k = 0; k < 16; k++)
            {
                ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(k) = ::app::Uno::Float4x4__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            }
        }
    }
}

void MeshBatchingEngine__DrawIndividual(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry enum_125 = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Fuse::Entities::Entry e = enum_125.Current();
        __this->DrawMesh(dc, m, e.Mesh, e.World, e.WorldInverse);
    }
}

void MeshBatchingEngine__DrawList(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Count() > 2)
    {
        ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* meshCounts = ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL);

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Count(); i++)
        {
            if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(meshCounts)->ContainsKey(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(i).Mesh))
            {
                ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(meshCounts)->Add(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(i).Mesh, ::app::Uno::Collections::List__Fuse_Entities_Entry__New_1(NULL));
            }

            ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(meshCounts->Item(entries->Item(i).Mesh))->Add(entries->Item(i));
        }

        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(meshCounts)->GetEnumerator(); enum_124.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ p = enum_124.Current();

            if ((::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(p.Key())->ModelMesh())->VertexCount() > 20000) || (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(p.Value())->Count() < 3))
            {
                __this->DrawIndividual(dc, material, p.Value());
            }
            else
            {
                ::app::Fuse::Drawing::Batching::MeshBatcher* batcher = __this->FindOrCreateBatcher(p.Key());
                __this->DrawBatched(dc, material, batcher, p.Value());
            }
        }
    }
    else
    {
        __this->DrawIndividual(dc, material, entries);
    }
}

void MeshBatchingEngine__DrawMesh(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse)
{
    ::uArray* array_126;
    int index_127 = int();
    int length_128 = int();

    for (array_126 = ::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->Batches(), index_127 = 0, length_128 = ::uPtr< ::uArray*>(array_126)->Length(); index_127 < length_128; ++index_127)
    {
        ::app::Fuse::Drawing::Batching::Batch* b = ::uPtr< ::uArray*>(array_126)->Item< ::app::Fuse::Drawing::Batching::Batch*>(index_127);
        __this->DrawBatch(dc, m, b, world, worldInverse);
    }
}

::app::Fuse::Drawing::Batching::MeshBatcher* MeshBatchingEngine__FindOrCreateBatcher(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* mesh)
{
    ::app::Fuse::Drawing::Batching::MeshBatcher* batcher;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->batchers)->TryGetValue(mesh, &batcher))
    {
        batcher = ::app::Fuse::Drawing::Batching::MeshBatcher__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->batchers)->Item(mesh, batcher);
        int instanceCount = ::app::Uno::Math__Min_8(NULL, 16, 65535 / ::app::Uno::Math__Max_8(NULL, 1, __this->MeshVertexCount(mesh)));

        for (int i = 0; i < instanceCount; i++)
        {
            ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(batcher)->AddMesh(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh());
        }

        batcher->Flush();
    }

    return batcher;
}

void MeshBatchingEngine__Flush(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ p = enum_123.Current();
        __this->DrawList(dc, p.Key(), p.Value());
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->Clear();
}

void MeshBatchingEngine__free_DrawCalls(MeshBatchingEngine* __this)
{
}

MeshBatchingEngine* MeshBatchingEngine__get_Singleton(::uStatic* __this)
{
    MeshBatchingEngine* ind_131 = MeshBatchingEngine___singleton;
    return (ind_131 != NULL) ? ind_131 : (MeshBatchingEngine___singleton = MeshBatchingEngine__New_1(NULL));
}

void MeshBatchingEngine__init_DrawCalls(MeshBatchingEngine* __this)
{
    __this->_draw_3d7404f9 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 88), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_e92d1425 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 89), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

int MeshBatchingEngine__MeshVertexCount(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* mesh)
{
    return (::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh())->IndexCount() != -1) ? ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh())->IndexCount() : ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh())->VertexCount();
}

MeshBatchingEngine* MeshBatchingEngine__New_1(::uStatic* __this)
{
    MeshBatchingEngine* inst = (MeshBatchingEngine*)::uAllocObject(sizeof(MeshBatchingEngine), MeshBatchingEngine__typeof());
    inst->_ObjInit();
    return inst;
}

void MeshBatchingEngine__PrepareMesh(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* m)
{
    __this->FindOrCreateBatcher(m);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* MeshHitTestMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Entities.MeshHitTestMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "BoundingBox", 1LL,
        "BoundingSphere", 2LL,
        "Precise", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MeshRenderer__uType* MeshRenderer__typeof()
{
    static ::uStaticStrong<MeshRenderer__uType*> type;
    if (type != NULL) return type;

    type = (MeshRenderer__uType*)::uAllocClassType(sizeof(MeshRenderer__uType), "Fuse.Entities.MeshRenderer", false, 0, 8, 0);

    type->SetBaseType(::app::Fuse::Entities::Component__typeof());
    type->__fp_OnAdded = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))MeshRenderer__OnAdded;
    type->__fp_OnRemoved = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))MeshRenderer__OnRemoved;
    type->__fp_Validate = MeshRenderer__Validate;

    type->SetStrongRefs(
        "_draw_265654da._compiledProgram", offsetof(MeshRenderer, _draw_265654da._compiledProgram),
        "_draw_265654da._constValues", offsetof(MeshRenderer, _draw_265654da._constValues),
        "_draw_265654da._Program", offsetof(MeshRenderer, _draw_265654da._Program),
        "_draw_6d0ca2bb._compiledProgram", offsetof(MeshRenderer, _draw_6d0ca2bb._compiledProgram),
        "_draw_6d0ca2bb._constValues", offsetof(MeshRenderer, _draw_6d0ca2bb._constValues),
        "_draw_6d0ca2bb._Program", offsetof(MeshRenderer, _draw_6d0ca2bb._Program),
        "_material", offsetof(MeshRenderer, _material),
        "_mesh", offsetof(MeshRenderer, _mesh));

    type->SetFields(3,
        ::uNewField("_hitTestMode", NULL, offsetof(MeshRenderer, _hitTestMode), ::app::Fuse::Entities::MeshHitTestMode__typeof()),
        ::uNewField("_material", NULL, offsetof(MeshRenderer, _material), ::app::Fuse::Entities::Material__typeof()),
        ::uNewField("_mesh", NULL, offsetof(MeshRenderer, _mesh), ::app::Fuse::Entities::Mesh__typeof()));

    type->SetFunctions(16,
        ::uNewFunctionVoid("DrawDepth", MeshRenderer__DrawDepth, 0, false, ::app::Fuse::Drawing::Batching::Batch__typeof()),
        ::uNewFunctionVoid("DrawDepthInternal", MeshRenderer__DrawDepthInternal, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("DrawSelectionCue", MeshRenderer__DrawSelectionCue, 0, false, ::app::Fuse::Drawing::Batching::Batch__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("DrawSelectionCueInternal", MeshRenderer__DrawSelectionCueInternal, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HitTestMode", MeshRenderer__get_HitTestMode, 0, false, ::app::Fuse::Entities::MeshHitTestMode__typeof()),
        ::uNewFunction("get_Material", MeshRenderer__get_Material, 0, false, ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunction("get_Mesh", MeshRenderer__get_Mesh, 0, false, ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunction(".ctor", MeshRenderer__New_1, 0, true, MeshRenderer__typeof()),
        ::uNewFunctionVoid("OnDraw", MeshRenderer__OnDraw, 0, false, ::uObject__typeof(), ::app::Fuse::DrawArgs__typeof()),
        ::uNewFunctionVoid("OnHitTest", MeshRenderer__OnHitTest, 0, false, ::uObject__typeof(), ::app::Fuse::HitTestContext__typeof()),
        ::uNewFunction("RayIntersectObjectSpace", MeshRenderer__RayIntersectObjectSpace, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("RayIntersectWorldSpace", MeshRenderer__RayIntersectWorldSpace, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_HitTestMode", MeshRenderer__set_HitTestMode, 0, false, ::app::Fuse::Entities::MeshHitTestMode__typeof()),
        ::uNewFunctionVoid("set_Material", MeshRenderer__set_Material, 0, false, ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunctionVoid("set_Mesh", MeshRenderer__set_Mesh, 0, false, ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunctionVoid("Validate", type->__fp_Validate, offsetof(MeshRenderer__uType, __fp_Validate), false));

    ::uRegisterType(type);
    return type;
}

void MeshRenderer___ObjInit_1(MeshRenderer* __this)
{
    ::app::Fuse::Entities::Component___ObjInit(__this);
    __this->init_DrawCalls();
}

void MeshRenderer__DrawDepth(MeshRenderer* __this, ::app::Fuse::Drawing::Batching::Batch* batch)
{
    {
        __this->_draw_6d0ca2bb.WriteRed(false);
        __this->_draw_6d0ca2bb.WriteGreen(false);
        __this->_draw_6d0ca2bb.WriteBlue(false);
        __this->_draw_6d0ca2bb.WriteAlpha(false);
        __this->_draw_6d0ca2bb.Use();
        __this->_draw_6d0ca2bb.Attrib_1(0, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
        __this->_draw_6d0ca2bb.Uniform_17(1, ::app::Uno::Matrix__Mul_8(NULL, ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform(), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Matrix__Mul_8(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL))));
        __this->_draw_6d0ca2bb.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
    }
}

void MeshRenderer__DrawDepthInternal(MeshRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    if (__this->_mesh == NULL)
    {
        return;
    }

    for (array_123 = ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->Batches(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Drawing::Batching::Batch* batch = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Drawing::Batching::Batch*>(index_124);
        __this->DrawDepth(batch);
    }
}

void MeshRenderer__DrawSelectionCue(MeshRenderer* __this, ::app::Fuse::Drawing::Batching::Batch* batch, bool selected, bool previewSelected, bool selectedSubtree)
{
    float alpha = 0.0f;

    if (selected)
    {
        alpha = 0.8f;
    }
    else
    {
        if (previewSelected)
        {
            alpha = alpha + 0.2f;
        }

        if (selectedSubtree)
        {
            alpha = alpha + 0.2f;
        }
    }

    {
        __this->_draw_265654da.BlendEnabled(true);
        __this->_draw_265654da.BlendSrcRgb(2);
        __this->_draw_265654da.BlendSrcAlpha(2);
        __this->_draw_265654da.BlendDstRgb(3);
        __this->_draw_265654da.BlendDstAlpha(3);
        __this->_draw_265654da.WriteAlpha(false);
        __this->_draw_265654da.Use();
        __this->_draw_265654da.Attrib_1(0, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
        __this->_draw_265654da.Uniform_16(1, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.85f, 1.0f, alpha));
        __this->_draw_265654da.Uniform_17(2, ::app::Uno::Matrix__Mul_8(NULL, ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform(), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Matrix__Mul_8(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport() != NULL) ? ::app::Fuse::IViewport::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Viewport())) : ::app::Uno::Float4x4__get_Identity(NULL))));
        __this->_draw_265654da.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
    }
}

void MeshRenderer__DrawSelectionCueInternal(MeshRenderer* __this, bool isSelected, bool isPreviewSelected, bool isSelectedSubtree)
{
    ::uArray* array_126;
    int index_127 = int();
    int length_128 = int();

    if (__this->_mesh == NULL)
    {
        return;
    }

    for (array_126 = ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->Batches(), index_127 = 0, length_128 = ::uPtr< ::uArray*>(array_126)->Length(); index_127 < length_128; ++index_127)
    {
        ::app::Fuse::Drawing::Batching::Batch* batch = ::uPtr< ::uArray*>(array_126)->Item< ::app::Fuse::Drawing::Batching::Batch*>(index_127);
        __this->DrawSelectionCue(batch, isSelected, isPreviewSelected, isSelectedSubtree);
    }
}

void MeshRenderer__free_DrawCalls(MeshRenderer* __this)
{
}

int MeshRenderer__get_HitTestMode(MeshRenderer* __this)
{
    return __this->_hitTestMode;
}

::app::Fuse::Entities::Material* MeshRenderer__get_Material(MeshRenderer* __this)
{
    if (__this->_material != NULL)
    {
        return __this->_material;
    }

    ::app::Fuse::Entities::Entity* e = __this->Entity();

    while (e != NULL)
    {
        e = ::uPtr< ::app::Fuse::Entities::Entity*>(e)->ParentEntity();

        if ((e != NULL) && (e->MeshRenderer() != NULL))
        {
            return ::uPtr< MeshRenderer*>(e->MeshRenderer())->Material();
        }
    }

    return NULL;
}

::app::Fuse::Entities::Mesh* MeshRenderer__get_Mesh(MeshRenderer* __this)
{
    return __this->_mesh;
}

void MeshRenderer__init_DrawCalls(MeshRenderer* __this)
{
    __this->_draw_6d0ca2bb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 90), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_265654da = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 91), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

MeshRenderer* MeshRenderer__New_1(::uStatic* __this)
{
    MeshRenderer* inst = (MeshRenderer*)::uAllocObject(sizeof(MeshRenderer), MeshRenderer__typeof());
    inst->_ObjInit_1();
    return inst;
}

void MeshRenderer__OnAdded(MeshRenderer* __this, ::app::Fuse::Entities::Entity* e)
{
    ::uPtr< ::app::Fuse::Entities::Entity*>(e)->add_ComponentDraw(::uNewDelegateNonVirt(::app::Fuse::DrawHandler__typeof(), (const void*)MeshRenderer__OnDraw, __this));
    e->add_ComponentHitTest(::uNewDelegateNonVirt(::app::Fuse::HitTestHandler__typeof(), (const void*)MeshRenderer__OnHitTest, __this));
}

void MeshRenderer__OnDraw(MeshRenderer* __this, ::uObject* sender, ::app::Fuse::DrawArgs* args)
{
    __this->Validate();
    ::app::Fuse::DrawContext* dc = ::uPtr< ::app::Fuse::DrawArgs*>(args)->Context();

    if (__this->_mesh == NULL)
    {
        return;
    }

    if (__this->Material() == NULL)
    {
        return;
    }

    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform();

    if (!::uPtr< ::app::Fuse::Entities::Material*>(__this->Material())->Draw(__this->_mesh, m))
    {
        ::uPtr< ::app::Fuse::Entities::MeshBatchingEngine*>(::app::Fuse::Entities::MeshBatchingEngine__get_Singleton(NULL))->Draw(dc, __this->_mesh, m, __this->Material());
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->Flush();
    }
}

void MeshRenderer__OnHitTest(MeshRenderer* __this, ::uObject* sender, ::app::Fuse::HitTestContext* args)
{
    if (__this->HitTestMode() == 0)
    {
        return;
    }

    if (__this->_mesh == NULL)
    {
        return;
    }

    ::app::Uno::Geometry::Ray objRay = ::app::Uno::Geometry::Ray__Transform(NULL, ::uPtr< ::app::Fuse::HitTestContext*>(args)->WorldRay(), ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransformInverse());
    float distance = float();
    bool hit = ::app::Uno::Geometry::Collision__RayIntersectsBox(NULL, objRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->BoundingBox(), &distance);

    if (hit)
    {
        if (__this->HitTestMode() == 2)
        {
            hit = ::app::Uno::Geometry::Collision__RayIntersectsSphere(NULL, objRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->BoundingSphere(), &distance);
        }
        else if (__this->HitTestMode() == 3)
        {
            hit = ::app::Fuse::Entities::ModelMeshCollision__RayIntersectsModelMesh(NULL, objRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->ModelMesh(), &distance);
        }

        ::app::Uno::Float3 hitPoint = ::app::Uno::Vector__TransformCoordinate_1(NULL, ::app::Uno::Float3__op_Addition_2(NULL, objRay.Position, ::app::Uno::Float3__op_Multiply_1(NULL, objRay.Direction, distance)), ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform());
        float dist = ::app::Uno::Vector__Length_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, hitPoint, ::uPtr< ::app::Fuse::HitTestContext*>(args)->WorldRay().Position));
        args->Hit_1((::app::Fuse::Node*)__this->Entity(), dist);
    }
}

void MeshRenderer__OnRemoved(MeshRenderer* __this, ::app::Fuse::Entities::Entity* e)
{
    ::uPtr< ::app::Fuse::Entities::Entity*>(e)->remove_ComponentDraw(::uNewDelegateNonVirt(::app::Fuse::DrawHandler__typeof(), (const void*)MeshRenderer__OnDraw, __this));
    e->remove_ComponentHitTest(::uNewDelegateNonVirt(::app::Fuse::HitTestHandler__typeof(), (const void*)MeshRenderer__OnHitTest, __this));
}

bool MeshRenderer__RayIntersectObjectSpace(MeshRenderer* __this, ::app::Uno::Geometry::Ray objectSpaceRay, float* distance)
{
    if (__this->_mesh == NULL)
    {
        *distance = 0.0f;
        return false;
    }

    if (!::app::Uno::Geometry::Collision__RayIntersectsBox(NULL, objectSpaceRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->BoundingBox(), distance))
    {
        return false;
    }

    if (!::app::Fuse::Entities::ModelMeshCollision__RayIntersectsModelMesh(NULL, objectSpaceRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->ModelMesh(), distance))
    {
        return false;
    }

    return true;
}

bool MeshRenderer__RayIntersectWorldSpace(MeshRenderer* __this, ::app::Uno::Geometry::Ray worldSpaceRay, float* distance)
{
    return __this->RayIntersectObjectSpace(::app::Uno::Geometry::Ray__Transform(NULL, worldSpaceRay, ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransformInverse()), distance);
}

void MeshRenderer__set_HitTestMode(MeshRenderer* __this, int value)
{
    __this->_hitTestMode = value;
}

void MeshRenderer__set_Material(MeshRenderer* __this, ::app::Fuse::Entities::Material* value)
{
    __this->_material = value;
}

void MeshRenderer__set_Mesh(MeshRenderer* __this, ::app::Fuse::Entities::Mesh* value)
{
    if (value == __this->_mesh)
    {
        return;
    }

    __this->_mesh = value;
}

void MeshRenderer__Validate(MeshRenderer* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelMeshCollision__uType* ModelMeshCollision__typeof()
{
    static ::uStaticStrong<ModelMeshCollision__uType*> type;
    if (type != NULL) return type;

    type = (ModelMeshCollision__uType*)::uAllocClassType(sizeof(ModelMeshCollision__uType), "Fuse.Entities.ModelMeshCollision", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction(".ctor", ModelMeshCollision__New_1, 0, true, ModelMeshCollision__typeof()),
        ::uNewFunction("RayIntersectsModelMesh", ModelMeshCollision__RayIntersectsModelMesh, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelMeshCollision___ObjInit(ModelMeshCollision* __this)
{
}

ModelMeshCollision* ModelMeshCollision__New_1(::uStatic* __this)
{
    ModelMeshCollision* inst = (ModelMeshCollision*)::uAllocObject(sizeof(ModelMeshCollision), ModelMeshCollision__typeof());
    inst->_ObjInit();
    return inst;
}

bool ModelMeshCollision__RayIntersectsModelMesh(::uStatic* __this, ::app::Uno::Geometry::Ray objRay, ::app::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance)
{
    if (modelMesh == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("modelMesh can not be null")));
    }

    bool useIndices = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(modelMesh)->IndexCount() > 0;
    return useIndices ? ::uPtr< ::app::Fuse::Entities::ModelMeshCollision_Indexed*>(::app::Fuse::Entities::ModelMeshCollision_Indexed__New_1(NULL, modelMesh->Positions(), modelMesh->Indices(), modelMesh->IndexCount()))->IntersectsRay(objRay, outDistance) : ::uPtr< ::app::Fuse::Entities::ModelMeshCollision_Direct*>(::app::Fuse::Entities::ModelMeshCollision_Direct__New_1(NULL, modelMesh->Positions(), modelMesh->VertexCount()))->IntersectsRay(objRay, outDistance);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelMeshCollision_Direct__uType* ModelMeshCollision_Direct__typeof()
{
    static ::uStaticStrong<ModelMeshCollision_Direct__uType*> type;
    if (type != NULL) return type;

    type = (ModelMeshCollision_Direct__uType*)::uAllocClassType(sizeof(ModelMeshCollision_Direct__uType), "Fuse.Entities.ModelMeshCollision.Direct", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Entities::TriangleMeshIntersecter__typeof());
    type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))ModelMeshCollision_Direct__GetTriangle;

    type->SetStrongRefs(
        "_positions", offsetof(ModelMeshCollision_Direct, _positions));

    return type;
}

void ModelMeshCollision_Direct___ObjInit_1(ModelMeshCollision_Direct* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount)
{
    ::app::Fuse::Entities::TriangleMeshIntersecter___ObjInit(__this, vertexCount / 3);

    if (positions == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("positions can not be null")));
    }

    __this->_positions = positions;
}

::app::Uno::Geometry::Triangle ModelMeshCollision_Direct__GetTriangle(ModelMeshCollision_Direct* __this, int t)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, (ind_123 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(i), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), (ind_124 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(i + 1), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), (ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(i + 2), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)));
}

ModelMeshCollision_Direct* ModelMeshCollision_Direct__New_1(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount)
{
    ModelMeshCollision_Direct* inst = (ModelMeshCollision_Direct*)::uAllocObject(sizeof(ModelMeshCollision_Direct), ModelMeshCollision_Direct__typeof());
    inst->_ObjInit_1(positions, vertexCount);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelMeshCollision_Indexed__uType* ModelMeshCollision_Indexed__typeof()
{
    static ::uStaticStrong<ModelMeshCollision_Indexed__uType*> type;
    if (type != NULL) return type;

    type = (ModelMeshCollision_Indexed__uType*)::uAllocClassType(sizeof(ModelMeshCollision_Indexed__uType), "Fuse.Entities.ModelMeshCollision.Indexed", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Entities::TriangleMeshIntersecter__typeof());
    type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))ModelMeshCollision_Indexed__GetTriangle;

    type->SetStrongRefs(
        "_indices", offsetof(ModelMeshCollision_Indexed, _indices),
        "_positions", offsetof(ModelMeshCollision_Indexed, _positions));

    return type;
}

void ModelMeshCollision_Indexed___ObjInit_1(ModelMeshCollision_Indexed* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ::app::Fuse::Entities::TriangleMeshIntersecter___ObjInit(__this, indexCount / 3);

    if (positions == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("positions can not be null")));
    }

    if (indices == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("indices can not be null")));
    }

    __this->_positions = positions;
    __this->_indices = indices;
}

::app::Uno::Geometry::Triangle ModelMeshCollision_Indexed__GetTriangle(ModelMeshCollision_Indexed* __this, int t)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, (ind_123 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->_indices)->GetInt(i)), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), (ind_124 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->_indices)->GetInt(i + 1)), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), (ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->_indices)->GetInt(i + 2)), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)));
}

ModelMeshCollision_Indexed* ModelMeshCollision_Indexed__New_1(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ModelMeshCollision_Indexed* inst = (ModelMeshCollision_Indexed*)::uAllocObject(sizeof(ModelMeshCollision_Indexed), ModelMeshCollision_Indexed__typeof());
    inst->_ObjInit_1(positions, indices, indexCount);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelMeshHelpers__uType* ModelMeshHelpers__typeof()
{
    static ::uStaticStrong<ModelMeshHelpers__uType*> type;
    if (type != NULL) return type;

    type = (ModelMeshHelpers__uType*)::uAllocClassType(sizeof(ModelMeshHelpers__uType), "Fuse.Entities.ModelMeshHelpers");

    type->SetFunctions(2,
        ::uNewFunction("CalculateAABB", ModelMeshHelpers__CalculateAABB, 0, true, ::app::Uno::Geometry::Box__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunction("CalculateBoundingSphere", ModelMeshHelpers__CalculateBoundingSphere, 0, true, ::app::Uno::Geometry::Sphere__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Geometry::Box ModelMeshHelpers__CalculateAABB(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh)
{
    ::app::Uno::Content::Models::VertexAttributeArray* positions = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(modelMesh)->Positions();
    ::app::Uno::Float3 min = ::app::Uno::Float3__New_2(NULL, 3.402823e+38f, 3.402823e+38f, 3.402823e+38f);
    ::app::Uno::Float3 max = ::app::Uno::Float3__New_2(NULL, -3.402823e+38f, -3.402823e+38f, -3.402823e+38f);

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::app::Uno::Float4 ind_123 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(v);
        ::app::Uno::Float3 p = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
        min = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Min_1(NULL, min.X, p.X), ::app::Uno::Math__Min_1(NULL, min.Y, p.Y), ::app::Uno::Math__Min_1(NULL, min.Z, p.Z));
        max = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Max_1(NULL, max.X, p.X), ::app::Uno::Math__Max_1(NULL, max.Y, p.Y), ::app::Uno::Math__Max_1(NULL, max.Z, p.Z));
    }

    return ::app::Uno::Geometry::Box__New_1(NULL, min, max);
}

::app::Uno::Geometry::Sphere ModelMeshHelpers__CalculateBoundingSphere(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh)
{
    ::app::Uno::Content::Models::VertexAttributeArray* positions = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(modelMesh)->Positions();
    ::app::Uno::Float3 center = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    float radius = 0.0f;

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::app::Uno::Float4 ind_124 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(v);
        ::app::Uno::Float3 p = ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z);
        float dist = ::app::Uno::Vector__Distance_1(NULL, p, center);
        radius = ::app::Uno::Math__Max_1(NULL, dist, radius);
    }

    return ::app::Uno::Geometry::Sphere__New_2(NULL, center, radius);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeExtensions__uType* NodeExtensions__typeof()
{
    static ::uStaticStrong<NodeExtensions__uType*> type;
    if (type != NULL) return type;

    type = (NodeExtensions__uType*)::uAllocClassType(sizeof(NodeExtensions__uType), "Fuse.Entities.NodeExtensions");

    type->SetFunctions(1,
        ::uNewFunction("IsInSubtreeOf", NodeExtensions__IsInSubtreeOf, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

bool NodeExtensions__IsInSubtreeOf(::uStatic* __this, ::app::Fuse::Node* self, ::app::Fuse::Node* parent)
{
    for (::app::Fuse::Node* p = self; p != NULL; p = ::uPtr< ::app::Fuse::Node*>(p)->Parent())
    {
        if (p == parent)
        {
            return true;
        }
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointLight__uType* PointLight__typeof()
{
    static ::uStaticStrong<PointLight__uType*> type;
    if (type != NULL) return type;

    type = (PointLight__uType*)::uAllocClassType(sizeof(PointLight__uType), "Fuse.Entities.PointLight", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::Light__typeof());
    type->__fp_Accept = (void(*)(::app::Fuse::Entities::Light*, ::uObject*))PointLight__Accept;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointLight__New_1, 0, true, PointLight__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointLight___ObjInit_2(PointLight* __this)
{
    ::app::Fuse::Entities::Light___ObjInit_1(__this);
    __this->Range(200.0f);
}

void PointLight__Accept(PointLight* __this, ::uObject* visitor)
{
    ::app::Fuse::Entities::ILightVisitor::Visit_3(::uPtr< ::uObject*>(visitor), __this);
}

PointLight* PointLight__New_1(::uStatic* __this)
{
    PointLight* inst = (PointLight*)::uAllocObject(sizeof(PointLight), PointLight__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Raycasting__uType* Raycasting__typeof()
{
    static ::uStaticStrong<Raycasting__uType*> type;
    if (type != NULL) return type;

    type = (Raycasting__uType*)::uAllocClassType(sizeof(Raycasting__uType), "Fuse.Entities.Raycasting");

    type->SetFunctions(2,
        ::uNewFunction("PointToTexcoordSpace", Raycasting__PointToTexcoordSpace, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("PointToTexcoordSpace", Raycasting__PointToTexcoordSpace_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Entities::MeshRenderer__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Raycasting__PointToTexcoordSpace(::uStatic* __this, ::app::Fuse::DrawContext* tc, ::app::Fuse::Entities::Entity* e, ::app::Uno::Float2* pointCoord)
{
    if (e == NULL)
    {
        return false;
    }

    ::app::Fuse::Entities::Raycasting_EntityVisitor* v = ::app::Fuse::Entities::Raycasting_EntityVisitor__New_1(NULL, tc);
    return ::uPtr< ::app::Fuse::Entities::Raycasting_EntityVisitor*>(v)->Visit(e, pointCoord);
}

bool Raycasting__PointToTexcoordSpace_1(::uStatic* __this, ::app::Fuse::DrawContext* tc, ::app::Fuse::Entities::MeshRenderer* mr, ::app::Uno::Float2* pointCoord, float* minDistance)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Geometry::Ray objRay = ::app::Uno::Geometry::Ray__Transform(NULL, ::app::Fuse::IViewport::PointToWorldRay(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(tc)->Viewport()), *pointCoord), ::uPtr< ::app::Fuse::Entities::Entity*>(::uPtr< ::app::Fuse::Entities::MeshRenderer*>(mr)->Entity())->WorldTransformInverse());
    ::app::Uno::Float2 newPoint = *pointCoord;
    ::app::Uno::Content::Models::ModelMesh* modelMesh = ::uPtr< ::app::Fuse::Entities::Mesh*>(mr->Mesh())->ModelMesh();
    ::app::Uno::Content::Models::IndexArray* indices = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(modelMesh)->Indices();
    ::app::Uno::Content::Models::VertexAttributeArray* positions = modelMesh->Positions();
    ::app::Uno::Content::Models::VertexAttributeArray* uvs = modelMesh->TexCoords();

    if (uvs == NULL)
    {
        return false;
    }

    bool hit = false;
    bool useIndices = modelMesh->IndexCount() != -1;
    int count = useIndices ? modelMesh->IndexCount() : modelMesh->VertexCount();

    for (int i = 0; i < count; i = i + 3)
    {
        int a = useIndices ? ::uPtr< ::app::Uno::Content::Models::IndexArray*>(indices)->GetInt(i) : i;
        int b = useIndices ? indices->GetInt(i + 1) : (i + 1);
        int c = useIndices ? indices->GetInt(i + 2) : (i + 2);
        ::app::Uno::Geometry::Triangle triangle = ::app::Uno::Geometry::Triangle__New_1(NULL, (ind_123 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(a), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), (ind_124 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(b), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), (ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(c), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)));
        float distance = float();

        if (::app::Uno::Geometry::Collision__RayIntersectsTriangle(NULL, objRay, triangle, &distance))
        {
            hit = true;

            if (distance < *minDistance)
            {
                *minDistance = distance;
            }

            ::app::Uno::Float3 point = ::app::Uno::Float3__op_Addition_2(NULL, objRay.Position, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Vector__Normalize_1(NULL, objRay.Direction), distance));
            ::app::Uno::Float3 bc = triangle.GetBarycentricCoordinatesAt(point);
            ::app::Uno::Float4 ind_126 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(uvs)->GetFloat4(a);
            ::app::Uno::Float2 uva = ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y);
            ::app::Uno::Float4 ind_127 = uvs->GetFloat4(b);
            ::app::Uno::Float2 uvb = ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y);
            ::app::Uno::Float4 ind_128 = uvs->GetFloat4(c);
            ::app::Uno::Float2 uvc = ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y);
            ::app::Uno::Float2 uv = ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, uva, bc.X), ::app::Uno::Float2__op_Multiply_1(NULL, uvb, bc.Y)), ::app::Uno::Float2__op_Multiply_1(NULL, uvc, bc.Z));
            newPoint = uv;
        }
    }

    if (hit)
    {
        *pointCoord = newPoint;
    }

    return hit;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Raycasting_EntityVisitor__uType* Raycasting_EntityVisitor__typeof()
{
    static ::uStaticStrong<Raycasting_EntityVisitor__uType*> type;
    if (type != NULL) return type;

    type = (Raycasting_EntityVisitor__uType*)::uAllocClassType(sizeof(Raycasting_EntityVisitor__uType), "Fuse.Entities.Raycasting.EntityVisitor", false, 0, 1, 0);

    type->SetStrongRefs(
        "_tc", offsetof(Raycasting_EntityVisitor, _tc));

    return type;
}

void Raycasting_EntityVisitor___ObjInit(Raycasting_EntityVisitor* __this, ::app::Fuse::DrawContext* tc)
{
    __this->_minDistance = 3.402823e+38f;
    __this->_tc = tc;
}

Raycasting_EntityVisitor* Raycasting_EntityVisitor__New_1(::uStatic* __this, ::app::Fuse::DrawContext* tc)
{
    Raycasting_EntityVisitor* inst = (Raycasting_EntityVisitor*)::uAllocObject(sizeof(Raycasting_EntityVisitor), Raycasting_EntityVisitor__typeof());
    inst->_ObjInit(tc);
    return inst;
}

bool Raycasting_EntityVisitor__Visit(Raycasting_EntityVisitor* __this, ::app::Fuse::Entities::Entity* e, ::app::Uno::Float2* p)
{
    __this->_point = *p;
    __this->_foundAnyIntersections = false;
    ::uPtr< ::app::Fuse::Entities::Entity*>(e)->FindAllComponents__Fuse_Entities_MeshRenderer(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_MeshRenderer__typeof(), (const void*)Raycasting_EntityVisitor__VisitMeshRenderer, __this), true);
    *p = __this->_point;
    return __this->_foundAnyIntersections;
}

void Raycasting_EntityVisitor__VisitMeshRenderer(Raycasting_EntityVisitor* __this, ::app::Fuse::Entities::MeshRenderer* mr)
{
    if (::uPtr< ::app::Fuse::Entities::MeshRenderer*>(mr)->Mesh() == NULL)
    {
        return;
    }

    if (::app::Fuse::Entities::Raycasting__PointToTexcoordSpace_1(NULL, __this->_tc, mr, &__this->_point, &__this->_minDistance))
    {
        __this->_foundAnyIntersections = true;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RenderNode__uType* RenderNode__typeof()
{
    static ::uStaticStrong<RenderNode__uType*> type;
    if (type != NULL) return type;

    type = (RenderNode__uType*)::uAllocClassType(sizeof(RenderNode__uType), "Fuse.Entities.RenderNode", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))RenderNode__Draw;
    type->__fp_get_LocalBounds = (::app::Uno::Geometry::Box(*)(::app::Fuse::Node*))RenderNode__get_LocalBounds;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))RenderNode__get_SubNodeCount;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))RenderNode__GetSubNode;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))RenderNode__OnArrangeMarginBox;
    type->__fp_OnDraw = RenderNode__OnDraw;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))RenderNode__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RenderNode__uType, __interface_0));

    type->SetStrongRefs(
        "_children", offsetof(RenderNode, _children));

    type->SetFields(1,
        ::uNewField("_children", NULL, offsetof(RenderNode, _children), ::app::Uno::Collections::ObservableList__Fuse_Node__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Children", RenderNode__get_Children, 0, false, ::app::Uno::Collections::IList__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", RenderNode__New_1, 0, true, RenderNode__typeof()),
        ::uNewFunctionVoid("OnChildAdded", RenderNode__OnChildAdded, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnChildRemoved", RenderNode__OnChildRemoved, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnDraw", type->__fp_OnDraw, offsetof(RenderNode__uType, __fp_OnDraw), false, ::app::Fuse::DrawContext__typeof()));

    ::uRegisterType(type);
    return type;
}

void RenderNode___ObjInit_1(RenderNode* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
}

void RenderNode__Draw(RenderNode* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->IsVisible())
    {
        __this->OnDraw(dc);
    }
}

::uObject* RenderNode__get_Children(RenderNode* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = ::app::Uno::Collections::ObservableList__Fuse_Node__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)RenderNode__OnChildAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)RenderNode__OnChildRemoved, __this));
    }

    return (::uObject*)__this->_children;
}

::app::Uno::Geometry::Box RenderNode__get_LocalBounds(RenderNode* __this)
{
    return ::app::Uno::Geometry::Box__New_1(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), ::app::Uno::Float3__New_1(NULL, 0.0f));
}

int RenderNode__get_SubNodeCount(RenderNode* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children()));
}

::app::Fuse::Node* RenderNode__GetSubNode(RenderNode* __this, int index)
{
    return ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

RenderNode* RenderNode__New_1(::uStatic* __this)
{
    RenderNode* inst = (RenderNode*)::uAllocObject(sizeof(RenderNode), RenderNode__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float2 RenderNode__OnArrangeMarginBox(RenderNode* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 mx = ::app::Uno::Float2__New_1(NULL, 0.0f);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->Children())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Node* child = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_123));
        mx = ::app::Uno::Math__Max_3(NULL, mx, ::uPtr< ::app::Fuse::Node*>(child)->ArrangeMarginBox(position, availableSize, availSet));
    }

    return mx;
}

void RenderNode__OnChildAdded(RenderNode* __this, ::app::Fuse::Node* c)
{
    ::uPtr< ::app::Fuse::Node*>(c)->OnAdded((::app::Fuse::Node*)__this);
    __this->InvalidateLayout(2);
}

void RenderNode__OnChildRemoved(RenderNode* __this, ::app::Fuse::Node* c)
{
    ::uPtr< ::app::Fuse::Node*>(c)->OnRemoved((::app::Fuse::Node*)__this);
    __this->InvalidateLayout(2);
}

void RenderNode__OnDraw(RenderNode* __this, ::app::Fuse::DrawContext* dc)
{
    for (int i = ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
    {
        ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i))->Draw(dc);
    }
}

void RenderNode__OnHitTest(RenderNode* __this, ::app::Fuse::HitTestContext* args)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
    {
        ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i))->HitTest(args);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RenderToTexture__uType* RenderToTexture__typeof()
{
    static ::uStaticStrong<RenderToTexture__uType*> type;
    if (type != NULL) return type;

    type = (RenderToTexture__uType*)::uAllocClassType(sizeof(RenderToTexture__uType), "Fuse.Entities.RenderToTexture", false, 1, 7, 0);

    type->SetBaseType(::app::Fuse::Entities::RenderNode__typeof());
    type->__fp_OnDraw = (void(*)(::app::Fuse::Entities::RenderNode*, ::app::Fuse::DrawContext*))RenderToTexture__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RenderToTexture__uType, __interface_0));

    type->SetStrongRefs(
        "_draw_606d3302._compiledProgram", offsetof(RenderToTexture, _draw_606d3302._compiledProgram),
        "_draw_606d3302._constValues", offsetof(RenderToTexture, _draw_606d3302._constValues),
        "_draw_606d3302._Program", offsetof(RenderToTexture, _draw_606d3302._Program),
        "BlitFlipped_VertexData_606d3302_7_5_2", offsetof(RenderToTexture, BlitFlipped_VertexData_606d3302_7_5_2),
        "BlitFlipped_VertexData_606d3302_7_5_3", offsetof(RenderToTexture, BlitFlipped_VertexData_606d3302_7_5_3),
        "fb", offsetof(RenderToTexture, fb),
        "raycastTarget", offsetof(RenderToTexture, raycastTarget));

    type->SetFields(5,
        ::uNewField("depth", NULL, offsetof(RenderToTexture, depth), ::app::Uno::Bool__typeof()),
        ::uNewField("fb", NULL, offsetof(RenderToTexture, fb), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("format", NULL, offsetof(RenderToTexture, format), ::app::Uno::Graphics::Format__typeof()),
        ::uNewField("raycastTarget", NULL, offsetof(RenderToTexture, raycastTarget), ::app::Fuse::Entities::Entity__typeof()),
        ::uNewField("resolution", NULL, offsetof(RenderToTexture, resolution), ::app::Uno::Int2__typeof()));

    type->SetFunctions(19,
        ::uNewFunctionVoid("BlitFlipped", RenderToTexture__BlitFlipped, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_Clear", RenderToTexture__get_Clear, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_ClearColor", RenderToTexture__get_ClearColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_ClearDepth", RenderToTexture__get_ClearDepth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DepthBuffer", RenderToTexture__get_DepthBuffer, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_EventRaycastTarget", RenderToTexture__get_EventRaycastTarget, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction("get_FlipVertically", RenderToTexture__get_FlipVertically, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_PixelFormat", RenderToTexture__get_PixelFormat, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction("get_Resolution", RenderToTexture__get_Resolution, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_Result", RenderToTexture__get_Result, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction(".ctor", RenderToTexture__New_2, 0, true, RenderToTexture__typeof()),
        ::uNewFunctionVoid("set_Clear", RenderToTexture__set_Clear, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_ClearColor", RenderToTexture__set_ClearColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_ClearDepth", RenderToTexture__set_ClearDepth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DepthBuffer", RenderToTexture__set_DepthBuffer, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_EventRaycastTarget", RenderToTexture__set_EventRaycastTarget, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("set_FlipVertically", RenderToTexture__set_FlipVertically, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_PixelFormat", RenderToTexture__set_PixelFormat, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunctionVoid("set_Resolution", RenderToTexture__set_Resolution, 0, false, ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void RenderToTexture___ObjInit_2(RenderToTexture* __this)
{
    __this->format = 3;
    __this->depth = true;
    ::app::Fuse::Entities::RenderNode___ObjInit_1(__this);
    __this->Clear(true);
    __this->ClearDepth(1.0f);
    __this->Resolution(::app::Uno::Int2__New_2(NULL, 128, 128));
    __this->init_DrawCalls();
}

void RenderToTexture__BlitFlipped(RenderToTexture* __this, ::app::Uno::Graphics::Texture2D* tex)
{
    {
        __this->_draw_606d3302.DepthTestEnabled(false);
        __this->_draw_606d3302.CullFace(0);
        __this->_draw_606d3302.Use();
        __this->_draw_606d3302.Attrib_1(0, 2, __this->BlitFlipped_VertexData_606d3302_7_5_3, 8, 0);
        __this->_draw_606d3302.Sampler_2(1, tex);
        __this->_draw_606d3302.Draw(6, 2, __this->BlitFlipped_VertexData_606d3302_7_5_2);
    }
}

void RenderToTexture__free_DrawCalls(RenderToTexture* __this)
{
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->BlitFlipped_VertexData_606d3302_7_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->BlitFlipped_VertexData_606d3302_7_5_3)->Dispose();
}

bool RenderToTexture__get_Clear(RenderToTexture* __this)
{
    return __this->_Clear;
}

::app::Uno::Float4 RenderToTexture__get_ClearColor(RenderToTexture* __this)
{
    return __this->_ClearColor;
}

float RenderToTexture__get_ClearDepth(RenderToTexture* __this)
{
    return __this->_ClearDepth;
}

bool RenderToTexture__get_DepthBuffer(RenderToTexture* __this)
{
    return __this->depth;
}

::app::Fuse::Entities::Entity* RenderToTexture__get_EventRaycastTarget(RenderToTexture* __this)
{
    return __this->raycastTarget;
}

bool RenderToTexture__get_FlipVertically(RenderToTexture* __this)
{
    return __this->_FlipVertically;
}

int RenderToTexture__get_PixelFormat(RenderToTexture* __this)
{
    return __this->format;
}

::app::Uno::Int2 RenderToTexture__get_Resolution(RenderToTexture* __this)
{
    return __this->resolution;
}

::app::Uno::Graphics::Texture2D* RenderToTexture__get_Result(RenderToTexture* __this)
{
    if (__this->fb != NULL)
    {
        return ::uPtr< ::app::Uno::Graphics::Framebuffer*>(__this->fb)->ColorBuffer();
    }
    else
    {
        return NULL;
    }
}

void RenderToTexture__init_DrawCalls(RenderToTexture* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    __this->BlitFlipped_VertexData_606d3302_7_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, (array_123 = ::uNewArray(::app::Uno::UShort__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(0) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(1) = 1, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(2) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(3) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(4) = 3, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(5) = 0, array_123)), 0);
    __this->BlitFlipped_VertexData_606d3302_7_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), array_124)), 0);
    __this->_draw_606d3302 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 92), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

RenderToTexture* RenderToTexture__New_2(::uStatic* __this)
{
    RenderToTexture* inst = (RenderToTexture*)::uAllocObject(sizeof(RenderToTexture), RenderToTexture__typeof());
    inst->_ObjInit_2();
    return inst;
}

void RenderToTexture__OnDraw(RenderToTexture* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->FlipVertically())
    {
        ::app::Uno::Graphics::Framebuffer* tempfb = ::app::Fuse::FramebufferPool__Lock(NULL, __this->resolution.X, __this->resolution.Y, __this->format, __this->depth);
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(tempfb);

        if (__this->Clear())
        {
            dc->Clear(__this->ClearColor(), __this->ClearDepth());
        }

        ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);
        dc->PopRenderTarget();
        dc->PushRenderTarget(__this->fb);
        __this->BlitFlipped(::uPtr< ::app::Uno::Graphics::Framebuffer*>(tempfb)->ColorBuffer());
        dc->PopRenderTarget();
        ::app::Fuse::FramebufferPool__Release(NULL, tempfb);
    }
    else
    {
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(__this->fb);

        if (__this->Clear())
        {
            dc->Clear(__this->ClearColor(), __this->ClearDepth());
        }

        ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);
        dc->PopRenderTarget();
    }
}

void RenderToTexture__set_Clear(RenderToTexture* __this, bool value)
{
    __this->_Clear = value;
}

void RenderToTexture__set_ClearColor(RenderToTexture* __this, ::app::Uno::Float4 value)
{
    __this->_ClearColor = value;
}

void RenderToTexture__set_ClearDepth(RenderToTexture* __this, float value)
{
    __this->_ClearDepth = value;
}

void RenderToTexture__set_DepthBuffer(RenderToTexture* __this, bool value)
{
    __this->depth = value;
}

void RenderToTexture__set_EventRaycastTarget(RenderToTexture* __this, ::app::Fuse::Entities::Entity* value)
{
    __this->raycastTarget = value;
}

void RenderToTexture__set_FlipVertically(RenderToTexture* __this, bool value)
{
    __this->_FlipVertically = value;
}

void RenderToTexture__set_PixelFormat(RenderToTexture* __this, int value)
{
    __this->format = value;
}

void RenderToTexture__set_Resolution(RenderToTexture* __this, ::app::Uno::Int2 value)
{
    if (::app::Uno::Int2__op_Inequality(NULL, __this->resolution, value))
    {
        __this->resolution = ::app::Uno::Math__Max_10(NULL, ::app::Uno::Int2__New_1(NULL, 0), ::app::Uno::Math__Min_10(NULL, value, ::app::Uno::Int2__New_2(NULL, 2048, 2048)));

        if (__this->fb != NULL)
        {
            ::uPtr< ::app::Uno::Graphics::Framebuffer*>(__this->fb)->Dispose();
        }

        __this->fb = ::app::Uno::Graphics::Framebuffer__New_1(NULL, __this->resolution, __this->PixelFormat(), 1);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Scene__uType* Scene__typeof()
{
    static ::uStaticStrong<Scene__uType*> type;
    if (type != NULL) return type;

    type = (Scene__uType*)::uAllocClassType(sizeof(Scene__uType), "Fuse.Entities.Scene", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Entities::RenderNode__typeof());
    type->__fp_OnDraw = (void(*)(::app::Fuse::Entities::RenderNode*, ::app::Fuse::DrawContext*))Scene__OnDraw;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Scene__OnHitTest;
    type->__fp_WindowToWorldRay = (::app::Uno::Geometry::Ray(*)(::app::Fuse::Node*, ::app::Uno::Float2))Scene__WindowToWorldRay;
    type->__interface_1.__fp_PointToWorldRay = (::app::Uno::Geometry::Ray(*)(void*, ::app::Uno::Float2))Scene__PointToWorldRay;
    type->__interface_1.__fp_get_PointDensity = (float(*)(void*))Scene__get_PointDensity_1;
    type->__interface_1.__fp_get_Size = (::app::Uno::Float2(*)(void*))Scene__get_Size;
    type->__interface_1.__fp_get_PixelSize = (::app::Uno::Float2(*)(void*))Scene__get_PixelSize;
    type->__interface_1.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))Scene__get_ProjectionTransform;
    type->__interface_1.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))Scene__get_ViewProjectionTransform;
    type->__interface_1.__fp_get_ViewProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*))Scene__get_ViewProjectionTransformInverse;
    type->__interface_1.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))Scene__get_ViewTransform;
    type->__interface_1.__fp_get_ViewOrigin = (::app::Uno::Float3(*)(void*))Scene__get_ViewOrigin;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Scene__uType, __interface_0),
        ::app::Fuse::IViewport__typeof(), offsetof(Scene__uType, __interface_1));

    type->SetStrongRefs(
        "_Camera", offsetof(Scene, _Camera));

    type->SetFunctions(28,
        ::uNewFunctionVoid("add_WindowClosed", Scene__add_WindowClosed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_WindowClosing", Scene__add_WindowClosing, 0, false, ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof()),
        ::uNewFunctionVoid("add_WindowResized", Scene__add_WindowResized, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("get_AlwaysClear", Scene__get_AlwaysClear, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_AlwaysUseOwnCamera", Scene__get_AlwaysUseOwnCamera, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Camera", Scene__get_Camera, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction("get_ClearColor", Scene__get_ClearColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_HasCamera", Scene__get_HasCamera, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_PixelSize", Scene__get_PixelSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_PointDensity", Scene__get_PointDensity_1, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ProjectionTransform", Scene__get_ProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ProjectionTransformInverse", Scene__get_ProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Size", Scene__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewOrigin", Scene__get_ViewOrigin, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_ViewProjectionTransform", Scene__get_ViewProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewProjectionTransformInverse", Scene__get_ViewProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewRange", Scene__get_ViewRange, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewTransform", Scene__get_ViewTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewTransformInverse", Scene__get_ViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", Scene__New_2, 0, true, Scene__typeof()),
        ::uNewFunction("PointToWorldRay", Scene__PointToWorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("remove_WindowClosed", Scene__remove_WindowClosed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_WindowClosing", Scene__remove_WindowClosing, 0, false, ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof()),
        ::uNewFunctionVoid("remove_WindowResized", Scene__remove_WindowResized, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_AlwaysClear", Scene__set_AlwaysClear, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AlwaysUseOwnCamera", Scene__set_AlwaysUseOwnCamera, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Camera", Scene__set_Camera, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("set_ClearColor", Scene__set_ClearColor, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Scene___ObjInit_2(Scene* __this)
{
    ::app::Fuse::Entities::RenderNode___ObjInit_1(__this);
    __this->ClearColor(::app::Uno::Float4__New_1(NULL, 1.0f));
}

void Scene__add_WindowClosed(Scene* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Closed(value);
}

void Scene__add_WindowClosing(Scene* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Closing(value);
}

void Scene__add_WindowResized(Scene* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Resized(value);
}

bool Scene__get_AlwaysClear(Scene* __this)
{
    return __this->_AlwaysClear;
}

bool Scene__get_AlwaysUseOwnCamera(Scene* __this)
{
    return __this->_AlwaysUseOwnCamera;
}

::app::Fuse::Entities::Entity* Scene__get_Camera(Scene* __this)
{
    return __this->_Camera;
}

::app::Uno::Float4 Scene__get_ClearColor(Scene* __this)
{
    return __this->_ClearColor;
}

bool Scene__get_HasCamera(Scene* __this)
{
    return (__this->Camera() != NULL) && (::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent() != NULL);
}

::app::Uno::Float2 Scene__get_PixelSize(Scene* __this)
{
    return ::app::Fuse::IViewport::PixelSize(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Parent())->Viewport()));
}

float Scene__get_PointDensity_1(Scene* __this)
{
    return ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Parent())->Viewport()));
}

::app::Uno::Float4x4 Scene__get_ProjectionTransform(Scene* __this)
{
    return ::app::Fuse::IFrustum::GetProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent()), (::uObject*)__this);
}

::app::Uno::Float4x4 Scene__get_ProjectionTransformInverse(Scene* __this)
{
    return ::app::Fuse::IFrustum::GetProjectionTransformInverse(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent()), (::uObject*)__this);
}

::app::Uno::Float2 Scene__get_Size(Scene* __this)
{
    return ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Parent())->Viewport()));
}

::app::Uno::Float3 Scene__get_ViewOrigin(Scene* __this)
{
    return ::app::Fuse::IFrustum::GetWorldPosition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent()), (::uObject*)__this);
}

::app::Uno::Float4x4 Scene__get_ViewProjectionTransform(Scene* __this)
{
    return ::app::Uno::Matrix__Mul_8(NULL, __this->ViewTransform(), __this->ProjectionTransform());
}

::app::Uno::Float4x4 Scene__get_ViewProjectionTransformInverse(Scene* __this)
{
    return ::app::Uno::Matrix__Mul_8(NULL, __this->ProjectionTransformInverse(), __this->ViewTransformInverse());
}

::app::Uno::Float2 Scene__get_ViewRange(Scene* __this)
{
    return ::app::Fuse::IFrustum::GetDepthRange(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent()), (::uObject*)__this);
}

::app::Uno::Float4x4 Scene__get_ViewTransform(Scene* __this)
{
    return ::app::Fuse::IFrustum::GetViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent()), (::uObject*)__this);
}

::app::Uno::Float4x4 Scene__get_ViewTransformInverse(Scene* __this)
{
    return ::app::Fuse::IFrustum::GetViewTransformInverse(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(__this->Camera())->FrustumComponent()), (::uObject*)__this);
}

Scene* Scene__New_2(::uStatic* __this)
{
    Scene* inst = (Scene*)::uAllocObject(sizeof(Scene), Scene__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Scene__OnDraw(Scene* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->AlwaysClear())
    {
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->Clear(__this->ClearColor(), 1.0f);
    }

    if (__this->HasCamera())
    {
        dc->PushViewport((::uObject*)__this);
    }

    ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);

    if (__this->HasCamera())
    {
        dc->PopViewport();
    }
}

void Scene__OnHitTest(Scene* __this, ::app::Fuse::HitTestContext* args)
{
    ::uObject* w = __this->Viewport();

    if (w == NULL)
    {
        return;
    }

    ::app::Uno::Geometry::Ray ray = __this->PointToWorldRay(::uPtr< ::app::Fuse::HitTestContext*>(args)->WindowPoint());
    ::app::Uno::Geometry::Ray oldRay = args->PushWorldRay(ray);
    ::app::Fuse::Entities::RenderNode__OnHitTest(__this, args);
    args->PopWorldRay(oldRay);
}

::app::Uno::Geometry::Ray Scene__PointToWorldRay(Scene* __this, ::app::Uno::Float2 pointPos)
{
    return ::app::Fuse::FrustumViewport__PointToWorldRay(NULL, (::uObject*)__this, pointPos);
}

void Scene__remove_WindowClosed(Scene* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->remove_Closed(value);
}

void Scene__remove_WindowClosing(Scene* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->remove_Closing(value);
}

void Scene__remove_WindowResized(Scene* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->remove_Resized(value);
}

void Scene__set_AlwaysClear(Scene* __this, bool value)
{
    __this->_AlwaysClear = value;
}

void Scene__set_AlwaysUseOwnCamera(Scene* __this, bool value)
{
    __this->_AlwaysUseOwnCamera = value;
}

void Scene__set_Camera(Scene* __this, ::app::Fuse::Entities::Entity* value)
{
    __this->_Camera = value;
}

void Scene__set_ClearColor(Scene* __this, ::app::Uno::Float4 value)
{
    __this->_ClearColor = value;
}

::app::Uno::Geometry::Ray Scene__WindowToWorldRay(Scene* __this, ::app::Uno::Float2 windowCoord)
{
    return __this->PointToWorldRay(windowCoord);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SkinnedMeshRenderer__uType* SkinnedMeshRenderer__typeof()
{
    static ::uStaticStrong<SkinnedMeshRenderer__uType*> type;
    if (type != NULL) return type;

    type = (SkinnedMeshRenderer__uType*)::uAllocClassType(sizeof(SkinnedMeshRenderer__uType), "Fuse.Entities.SkinnedMeshRenderer", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Entities::MeshRenderer__typeof());

    type->SetStrongRefs(
        "_assDir", offsetof(SkinnedMeshRenderer, _assDir),
        "_bones", offsetof(SkinnedMeshRenderer, _bones));

    type->SetFields(2,
        ::uNewField("_assDir", NULL, offsetof(SkinnedMeshRenderer, _assDir), ::app::Fuse::Entities::Skinner__typeof()),
        ::uNewField("_bones", NULL, offsetof(SkinnedMeshRenderer, _bones), ::app::Uno::Collections::List__Fuse_Entities_Entity__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Bones", SkinnedMeshRenderer__get_Bones, 0, false, ::app::Uno::Collections::List__Fuse_Entities_Entity__typeof()),
        ::uNewFunction("GetBone", SkinnedMeshRenderer__GetBone, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", SkinnedMeshRenderer__New_2, 0, true, SkinnedMeshRenderer__typeof()),
        ::uNewFunctionVoid("UpdateMesh", SkinnedMeshRenderer__UpdateMesh, 0, false));

    ::uRegisterType(type);
    return type;
}

void SkinnedMeshRenderer___ObjInit_2(SkinnedMeshRenderer* __this)
{
    __this->_bones = ::app::Uno::Collections::List__Fuse_Entities_Entity__New_1(NULL);
    __this->_assDir = ::app::Fuse::Entities::Skinner__New_1(NULL);
    ::app::Fuse::Entities::MeshRenderer___ObjInit_1(__this);
}

::app::Uno::Collections::List__Fuse_Entities_Entity* SkinnedMeshRenderer__get_Bones(SkinnedMeshRenderer* __this)
{
    return __this->_bones;
}

::app::Uno::Float4x4 SkinnedMeshRenderer__GetBone(SkinnedMeshRenderer* __this, int index)
{
    if ((index < 0) || (index >= ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_bones)->Count()))
    {
        return ::app::Uno::Float4x4__get_Identity(NULL);
    }

    return ::uPtr< ::app::Fuse::Entities::Entity*>(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_bones)->Item(index))->WorldTransform();
}

SkinnedMeshRenderer* SkinnedMeshRenderer__New_2(::uStatic* __this)
{
    SkinnedMeshRenderer* inst = (SkinnedMeshRenderer*)::uAllocObject(sizeof(SkinnedMeshRenderer), SkinnedMeshRenderer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void SkinnedMeshRenderer__UpdateMesh(SkinnedMeshRenderer* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Skinner__uType* Skinner__typeof()
{
    static ::uStaticStrong<Skinner__uType*> type;
    if (type != NULL) return type;

    type = (Skinner__uType*)::uAllocClassType(sizeof(Skinner__uType), "Fuse.Entities.Skinner", false, 0, 1, 0);

    type->SetStrongRefs(
        "BoneListData", offsetof(Skinner, BoneListData));

    type->SetFields(1,
        ::uNewField("BoneListData", NULL, offsetof(Skinner, BoneListData), ::uGetArrayType(::app::Uno::Float4x4__typeof())));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Skinner__New_1, 0, true, Skinner__typeof()));

    ::uRegisterType(type);
    return type;
}

void Skinner___ObjInit(Skinner* __this)
{
    __this->BoneListData = ::uNewArray(::app::Uno::Float4x4__typeof(), 50);
}

Skinner* Skinner__New_1(::uStatic* __this)
{
    Skinner* inst = (Skinner*)::uAllocObject(sizeof(Skinner), Skinner__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpotLight__uType* SpotLight__typeof()
{
    static ::uStaticStrong<SpotLight__uType*> type;
    if (type != NULL) return type;

    type = (SpotLight__uType*)::uAllocClassType(sizeof(SpotLight__uType), "Fuse.Entities.SpotLight", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::Light__typeof());
    type->__fp_Accept = (void(*)(::app::Fuse::Entities::Light*, ::uObject*))SpotLight__Accept;

    type->SetFunctions(3,
        ::uNewFunction("get_Extent", SpotLight__get_Extent, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", SpotLight__New_1, 0, true, SpotLight__typeof()),
        ::uNewFunctionVoid("set_Extent", SpotLight__set_Extent, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void SpotLight___ObjInit_2(SpotLight* __this)
{
    ::app::Fuse::Entities::Light___ObjInit_1(__this);
    __this->Range(500.0f);
    __this->Extent(90.0f);
}

void SpotLight__Accept(SpotLight* __this, ::uObject* visitor)
{
    ::app::Fuse::Entities::ILightVisitor::Visit_4(::uPtr< ::uObject*>(visitor), __this);
}

float SpotLight__get_Extent(SpotLight* __this)
{
    return __this->_Extent;
}

SpotLight* SpotLight__New_1(::uStatic* __this)
{
    SpotLight* inst = (SpotLight*)::uAllocObject(sizeof(SpotLight), SpotLight__typeof());
    inst->_ObjInit_2();
    return inst;
}

void SpotLight__set_Extent(SpotLight* __this, float value)
{
    __this->_Extent = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Transform3D__uType* Transform3D__typeof()
{
    static ::uStaticStrong<Transform3D__uType*> type;
    if (type != NULL) return type;

    type = (Transform3D__uType*)::uAllocClassType(sizeof(Transform3D__uType), "Fuse.Entities.Transform3D", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Transform3D__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))Transform3D__get_IsFlat;
    type->__fp_OnAdded = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Transform3D__OnAdded;
    type->__fp_OnRemoved = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Transform3D__OnRemoved;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Transform3D__PrependTo;

    type->SetStrongRefs(
        "_Entity", offsetof(Transform3D, _Entity));

    type->SetFields(4,
        ::uNewField("position", NULL, offsetof(Transform3D, position), ::app::Uno::Float3__typeof()),
        ::uNewField("rotationDegrees", NULL, offsetof(Transform3D, rotationDegrees), ::app::Uno::Float3__typeof()),
        ::uNewField("rotationQuaternion", NULL, offsetof(Transform3D, rotationQuaternion), ::app::Uno::Float4__typeof()),
        ::uNewField("scale", NULL, offsetof(Transform3D, scale), ::app::Uno::Float3__typeof()));

    type->SetFunctions(15,
        ::uNewFunction("Clone", Transform3D__Clone, 0, false, Transform3D__typeof()),
        ::uNewFunction("get_Entity", Transform3D__get_Entity, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction("get_Position", Transform3D__get_Position, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_RotationDegrees", Transform3D__get_RotationDegrees, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_RotationQuaternion", Transform3D__get_RotationQuaternion, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Scaling", Transform3D__get_Scaling, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("InvalidateLocal", Transform3D__InvalidateLocal, 0, false),
        ::uNewFunctionVoid("LookAt", Transform3D__LookAt, 0, false, ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Transform3D__New_1, 0, true, Transform3D__typeof()),
        ::uNewFunction(".ctor", Transform3D__New_2, 0, true, Transform3D__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_Entity", Transform3D__set_Entity, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("set_Position", Transform3D__set_Position, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_RotationDegrees", Transform3D__set_RotationDegrees, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_RotationQuaternion", Transform3D__set_RotationQuaternion, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Scaling", Transform3D__set_Scaling, 0, false, ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Transform3D___ObjInit_1(Transform3D* __this)
{
    ::app::Fuse::Transform___ObjInit(__this);
    __this->position = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    __this->rotationQuaternion = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f);
    __this->scale = ::app::Uno::Float3__New_2(NULL, 1.0f, 1.0f, 1.0f);
}

void Transform3D___ObjInit_2(Transform3D* __this, ::app::Uno::Float3 pos, ::app::Uno::Float4 rot, ::app::Uno::Float3 scale)
{
    ::app::Fuse::Transform___ObjInit(__this);
    __this->position = pos;
    __this->rotationQuaternion = rot;
    __this->scale = scale;
}

void Transform3D__AppendTo(Transform3D* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->Scaling(), ::app::Uno::Float3__New_1(NULL, 1.0f)))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendScale_1(::app::Uno::Math__Lerp_4(NULL, ::app::Uno::Float3__New_1(NULL, 1.0f), __this->Scaling(), weight));
    }

    if (::app::Uno::Float4__op_Inequality(NULL, __this->RotationQuaternion(), ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f)))
    {
        m->AppendRotationQuaternion(::app::Uno::Float4__op_Multiply_1(NULL, __this->RotationQuaternion(), weight));
    }

    if (::app::Uno::Float3__op_Inequality(NULL, __this->Position(), ::app::Uno::Float3__New_1(NULL, 0.0f)))
    {
        m->AppendTranslation_1(::app::Uno::Float3__op_Multiply_1(NULL, __this->Position(), weight));
    }
}

Transform3D* Transform3D__Clone(Transform3D* __this)
{
    return Transform3D__New_2(NULL, __this->Position(), __this->RotationQuaternion(), __this->Scaling());
}

::app::Fuse::Entities::Entity* Transform3D__get_Entity(Transform3D* __this)
{
    return __this->_Entity;
}

bool Transform3D__get_IsFlat(Transform3D* __this)
{
    return ((::app::Uno::Math__Abs_1(NULL, __this->RotationDegrees().X) < 1e-05f) && (::app::Uno::Math__Abs_1(NULL, __this->RotationDegrees().Y) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, __this->Position().Z) < 1e-05f);
}

::app::Uno::Float3 Transform3D__get_Position(Transform3D* __this)
{
    return __this->position;
}

::app::Uno::Float3 Transform3D__get_RotationDegrees(Transform3D* __this)
{
    return __this->rotationDegrees;
}

::app::Uno::Float4 Transform3D__get_RotationQuaternion(Transform3D* __this)
{
    return __this->rotationQuaternion;
}

::app::Uno::Float3 Transform3D__get_Scaling(Transform3D* __this)
{
    return __this->scale;
}

void Transform3D__InvalidateLocal(Transform3D* __this)
{
    __this->OnMatrixChanged();
}

void Transform3D__LookAt(Transform3D* __this, ::app::Uno::Float3 worldTarget, ::app::Uno::Float3 worldUp)
{
    ::app::Uno::Float4x4 view = ::app::Uno::Matrix__LookAtRH(NULL, ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldPosition_1(), worldTarget, worldUp);
    ::app::Uno::Float3 pos = ::app::Uno::Float3();
    ::app::Uno::Float3 scale = ::app::Uno::Float3();
    ::app::Uno::Float4 rot = ::app::Uno::Float4();
    ::app::Uno::Matrix__Decompose(NULL, view, &scale, &rot, &pos);
    ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldRotationQuaternion(::app::Uno::Quaternion__Invert(NULL, rot));
}

Transform3D* Transform3D__New_1(::uStatic* __this)
{
    Transform3D* inst = (Transform3D*)::uAllocObject(sizeof(Transform3D), Transform3D__typeof());
    inst->_ObjInit_1();
    return inst;
}

Transform3D* Transform3D__New_2(::uStatic* __this, ::app::Uno::Float3 pos, ::app::Uno::Float4 rot, ::app::Uno::Float3 scale)
{
    Transform3D* inst = (Transform3D*)::uAllocObject(sizeof(Transform3D), Transform3D__typeof());
    inst->_ObjInit_2(pos, rot, scale);
    return inst;
}

void Transform3D__OnAdded(Transform3D* __this, ::app::Fuse::Node* n)
{
    __this->Entity(::uAs< ::app::Fuse::Entities::Entity*>(n, ::app::Fuse::Entities::Entity__typeof()));
}

void Transform3D__OnRemoved(Transform3D* __this, ::app::Fuse::Node* n)
{
    __this->Entity(NULL);
}

void Transform3D__PrependTo(Transform3D* __this, ::app::Fuse::FastMatrix* m)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->Position(), ::app::Uno::Float3__New_1(NULL, 0.0f)))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation_1(__this->Position());
    }

    if (::app::Uno::Float4__op_Inequality(NULL, __this->RotationQuaternion(), ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f)))
    {
        m->PrependRotationQuaternion(__this->RotationQuaternion());
    }

    if (::app::Uno::Float3__op_Inequality(NULL, __this->Scaling(), ::app::Uno::Float3__New_1(NULL, 1.0f)))
    {
        m->PrependScale_1(__this->Scaling());
    }
}

void Transform3D__set_Entity(Transform3D* __this, ::app::Fuse::Entities::Entity* value)
{
    __this->_Entity = value;
}

void Transform3D__set_Position(Transform3D* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->position, value))
    {
        __this->position = value;
        __this->InvalidateLocal();
    }
}

void Transform3D__set_RotationDegrees(Transform3D* __this, ::app::Uno::Float3 value)
{
    __this->rotationDegrees = value;
    __this->rotationQuaternion = ::app::Uno::Quaternion__FromEulerAngleDegrees_1(NULL, value);
    __this->InvalidateLocal();
}

void Transform3D__set_RotationQuaternion(Transform3D* __this, ::app::Uno::Float4 value)
{
    __this->rotationQuaternion = value;
    __this->rotationDegrees = ::app::Uno::Quaternion__ToEulerAngleDegrees(NULL, value);
    __this->InvalidateLocal();
}

void Transform3D__set_Scaling(Transform3D* __this, ::app::Uno::Float3 value)
{
    __this->scale = value;
    __this->InvalidateLocal();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TriangleMeshIntersecter__uType* TriangleMeshIntersecter__typeof()
{
    static ::uStaticStrong<TriangleMeshIntersecter__uType*> type;
    if (type != NULL) return type;

    type = (TriangleMeshIntersecter__uType*)::uAllocClassType(sizeof(TriangleMeshIntersecter__uType), "Fuse.Entities.TriangleMeshIntersecter", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_count", NULL, offsetof(TriangleMeshIntersecter, _count), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetTriangle", type->__fp_GetTriangle, offsetof(TriangleMeshIntersecter__uType, __fp_GetTriangle), false, ::app::Uno::Geometry::Triangle__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IntersectsRay", TriangleMeshIntersecter__IntersectsRay, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void TriangleMeshIntersecter___ObjInit(TriangleMeshIntersecter* __this, int count)
{
    __this->_count = count;
}

bool TriangleMeshIntersecter__IntersectsRay(TriangleMeshIntersecter* __this, ::app::Uno::Geometry::Ray objRay, float* outDistance)
{
    float minDistance = 3.402823e+38f;
    bool hit = false;

    for (int t = 0; t < __this->_count; t++)
    {
        float distance = float();

        if (::app::Uno::Geometry::Collision__RayIntersectsTriangle(NULL, objRay, __this->GetTriangle(t), &distance))
        {
            hit = true;

            if (distance < minDistance)
            {
                minDistance = distance;
            }
        }
    }

    *outDistance = minDistance;
    return hit;
}

}}}
