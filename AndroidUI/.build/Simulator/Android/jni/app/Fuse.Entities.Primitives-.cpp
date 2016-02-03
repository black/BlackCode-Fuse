#include <app/Fuse.Drawing.Meshes.MeshGenerator.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.MeshHitTestMode.h>
#include <app/Fuse.Entities.Primitives.ConeRenderer.h>
#include <app/Fuse.Entities.Primitives.CubeRenderer.h>
#include <app/Fuse.Entities.Primitives.CylinderRenderer.h>
#include <app/Fuse.Entities.Primitives.SphereRenderer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Primitives {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConeRenderer__uType* ConeRenderer__typeof()
{
    static ::uStaticStrong<ConeRenderer__uType*> type;
    if (type != NULL) return type;

    type = (ConeRenderer__uType*)::uAllocClassType(sizeof(ConeRenderer__uType), "Fuse.Entities.Primitives.ConeRenderer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::MeshRenderer__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConeRenderer__New_2, 0, true, ConeRenderer__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConeRenderer___ObjInit_2(ConeRenderer* __this)
{
    ::app::Fuse::Entities::MeshRenderer___ObjInit_1(__this);
    __this->Mesh(::app::Fuse::Entities::Mesh__New_2(NULL, ::app::Fuse::Drawing::Meshes::MeshGenerator__CreateCone(NULL, 10.0f, 5.0f, 16, 16)));
}

ConeRenderer* ConeRenderer__New_2(::uStatic* __this)
{
    ConeRenderer* inst = (ConeRenderer*)::uAllocObject(sizeof(ConeRenderer), ConeRenderer__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CubeRenderer__uType* CubeRenderer__typeof()
{
    static ::uStaticStrong<CubeRenderer__uType*> type;
    if (type != NULL) return type;

    type = (CubeRenderer__uType*)::uAllocClassType(sizeof(CubeRenderer__uType), "Fuse.Entities.Primitives.CubeRenderer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::MeshRenderer__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CubeRenderer__New_2, 0, true, CubeRenderer__typeof()));

    ::uRegisterType(type);
    return type;
}

void CubeRenderer___ObjInit_2(CubeRenderer* __this)
{
    ::app::Fuse::Entities::MeshRenderer___ObjInit_1(__this);
    __this->Mesh(::app::Fuse::Entities::Mesh__New_2(NULL, ::app::Fuse::Drawing::Meshes::MeshGenerator__CreateCube(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), 5.0f)));
    __this->HitTestMode(1);
}

CubeRenderer* CubeRenderer__New_2(::uStatic* __this)
{
    CubeRenderer* inst = (CubeRenderer*)::uAllocObject(sizeof(CubeRenderer), CubeRenderer__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CylinderRenderer__uType* CylinderRenderer__typeof()
{
    static ::uStaticStrong<CylinderRenderer__uType*> type;
    if (type != NULL) return type;

    type = (CylinderRenderer__uType*)::uAllocClassType(sizeof(CylinderRenderer__uType), "Fuse.Entities.Primitives.CylinderRenderer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::MeshRenderer__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CylinderRenderer__New_2, 0, true, CylinderRenderer__typeof()));

    ::uRegisterType(type);
    return type;
}

void CylinderRenderer___ObjInit_2(CylinderRenderer* __this)
{
    ::app::Fuse::Entities::MeshRenderer___ObjInit_1(__this);
    __this->Mesh(::app::Fuse::Entities::Mesh__New_2(NULL, ::app::Fuse::Drawing::Meshes::MeshGenerator__CreateCylinder(NULL, 10.0f, 5.0f, 16, 16)));
}

CylinderRenderer* CylinderRenderer__New_2(::uStatic* __this)
{
    CylinderRenderer* inst = (CylinderRenderer*)::uAllocObject(sizeof(CylinderRenderer), CylinderRenderer__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SphereRenderer__uType* SphereRenderer__typeof()
{
    static ::uStaticStrong<SphereRenderer__uType*> type;
    if (type != NULL) return type;

    type = (SphereRenderer__uType*)::uAllocClassType(sizeof(SphereRenderer__uType), "Fuse.Entities.Primitives.SphereRenderer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Entities::MeshRenderer__typeof());
    type->__fp_Validate = (void(*)(::app::Fuse::Entities::MeshRenderer*))SphereRenderer__Validate;

    type->SetFields(3,
        ::uNewField("_isDirty", NULL, offsetof(SphereRenderer, _isDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("_quality", NULL, offsetof(SphereRenderer, _quality), ::app::Uno::Int__typeof()),
        ::uNewField("_radius", NULL, offsetof(SphereRenderer, _radius), ::app::Uno::Float__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Quality", SphereRenderer__get_Quality, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Radius", SphereRenderer__get_Radius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", SphereRenderer__New_2, 0, true, SphereRenderer__typeof()),
        ::uNewFunctionVoid("set_Quality", SphereRenderer__set_Quality, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Radius", SphereRenderer__set_Radius, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void SphereRenderer___ObjInit_2(SphereRenderer* __this)
{
    __this->_radius = 5.0f;
    __this->_quality = 16;
    ::app::Fuse::Entities::MeshRenderer___ObjInit_1(__this);
    __this->HitTestMode(2);
}

int SphereRenderer__get_Quality(SphereRenderer* __this)
{
    return __this->_quality;
}

float SphereRenderer__get_Radius(SphereRenderer* __this)
{
    return __this->_radius;
}

SphereRenderer* SphereRenderer__New_2(::uStatic* __this)
{
    SphereRenderer* inst = (SphereRenderer*)::uAllocObject(sizeof(SphereRenderer), SphereRenderer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void SphereRenderer__set_Quality(SphereRenderer* __this, int value)
{
    if (__this->_quality != value)
    {
        __this->_quality = value;
        __this->_isDirty = true;
    }
}

void SphereRenderer__set_Radius(SphereRenderer* __this, float value)
{
    if (__this->_radius != value)
    {
        __this->_radius = value;
        __this->_isDirty = true;
    }
}

void SphereRenderer__Validate(SphereRenderer* __this)
{
    if (__this->_isDirty || (__this->Mesh() == NULL))
    {
        if (__this->Mesh() != NULL)
        {
            ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->Mesh())->Dispose();
        }

        __this->Mesh(::app::Fuse::Entities::Mesh__New_2(NULL, ::app::Fuse::Drawing::Meshes::MeshGenerator__CreateSphere(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), __this->_radius, __this->_quality, __this->_quality)));
        __this->_isDirty = false;
    }
}

}}}}
