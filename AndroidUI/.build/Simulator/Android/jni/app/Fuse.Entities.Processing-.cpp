#include <app/Fuse.Drawing.LineCap.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.Processing.Extrude.h>
#include <app/Fuse.Entities.Processing.Stroke.h>
#include <app/Fuse.IOutput__Fuse_Drawing_Polygon.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Processing {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Processing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Extrude__uType* Extrude__typeof()
{
    static ::uStaticStrong<Extrude__uType*> type;
    if (type != NULL) return type;

    type = (Extrude__uType*)::uAllocClassType(sizeof(Extrude__uType), "Fuse.Entities.Processing.Extrude", false, 0, 3, 0);

    type->SetStrongRefs(
        "_output", offsetof(Extrude, _output),
        "_source", offsetof(Extrude, _source),
        "OutputChanged", offsetof(Extrude, OutputChanged));

    type->SetFields(4,
        ::uNewField("_depth", NULL, offsetof(Extrude, _depth), ::app::Uno::Float__typeof()),
        ::uNewField("_output", NULL, offsetof(Extrude, _output), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewField("_smoothingThreshold", NULL, offsetof(Extrude, _smoothingThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_source", NULL, offsetof(Extrude, _source), ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("add_OutputChanged", Extrude__add_OutputChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("get_Depth", Extrude__get_Depth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Output", Extrude__get_Output, 0, false, ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunction("get_SmoothingThreshold", Extrude__get_SmoothingThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Source", Extrude__get_Source, 0, false, ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof()),
        ::uNewFunctionVoid("Invalidate", Extrude__Invalidate, 0, false),
        ::uNewFunction(".ctor", Extrude__New_1, 0, true, Extrude__typeof()),
        ::uNewFunctionVoid("remove_OutputChanged", Extrude__remove_OutputChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_Depth", Extrude__set_Depth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_SmoothingThreshold", Extrude__set_SmoothingThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Source", Extrude__set_Source, 0, false, ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof()));

    ::uRegisterType(type);
    return type;
}

void Extrude___ObjInit(Extrude* __this)
{
    __this->_smoothingThreshold = 0.1f;
}

void Extrude__add_OutputChanged(Extrude* __this, ::uDelegate* value)
{
    __this->OutputChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->OutputChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

float Extrude__get_Depth(Extrude* __this)
{
    return __this->_depth;
}

::app::Fuse::Entities::Mesh* Extrude__get_Output(Extrude* __this)
{
    if (__this->_output != NULL)
    {
        return __this->_output;
    }

    if ((__this->_source == NULL) || (::app::Fuse::IOutput__Fuse_Drawing_Polygon::Output(::uPtr< ::uObject*>(__this->_source)) == NULL))
    {
        return NULL;
    }

    __this->_output = ::app::Fuse::Entities::Mesh__New_2(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(::app::Fuse::IOutput__Fuse_Drawing_Polygon::Output(::uPtr< ::uObject*>(__this->_source)))->Extrude(__this->Depth(), __this->SmoothingThreshold()));
    return __this->_output;
}

float Extrude__get_SmoothingThreshold(Extrude* __this)
{
    return __this->_smoothingThreshold;
}

::uObject* Extrude__get_Source(Extrude* __this)
{
    return __this->_source;
}

void Extrude__Invalidate(Extrude* __this)
{
    __this->_output = NULL;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->OutputChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->OutputChanged)->InvokeVoid();
    }
}

Extrude* Extrude__New_1(::uStatic* __this)
{
    Extrude* inst = (Extrude*)::uAllocObject(sizeof(Extrude), Extrude__typeof());
    inst->_ObjInit();
    return inst;
}

void Extrude__remove_OutputChanged(Extrude* __this, ::uDelegate* value)
{
    __this->OutputChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->OutputChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Extrude__set_Depth(Extrude* __this, float value)
{
    __this->_depth = value;
    __this->Invalidate();
}

void Extrude__set_SmoothingThreshold(Extrude* __this, float value)
{
    __this->_smoothingThreshold = value;
    __this->Invalidate();
}

void Extrude__set_Source(Extrude* __this, ::uObject* value)
{
    if (value == __this->_source)
    {
        return;
    }

    if (__this->_source != NULL)
    {
        ::app::Fuse::IOutput__Fuse_Drawing_Polygon::remove_OutputChanged(::uPtr< ::uObject*>(__this->_source), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Extrude__Invalidate, __this));
    }

    __this->_source = value;

    if (__this->_source != NULL)
    {
        ::app::Fuse::IOutput__Fuse_Drawing_Polygon::add_OutputChanged(::uPtr< ::uObject*>(__this->_source), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Extrude__Invalidate, __this));
    }

    __this->Invalidate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Processing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stroke__uType* Stroke__typeof()
{
    static ::uStaticStrong<Stroke__uType*> type;
    if (type != NULL) return type;

    type = (Stroke__uType*)::uAllocClassType(sizeof(Stroke__uType), "Fuse.Entities.Processing.Stroke", false, 1, 3, 0);

    type->__interface_0.__fp_get_Output = (::app::Fuse::Drawing::Polygon*(*)(void*))Stroke__get_Output;
    type->__interface_0.__fp_add_OutputChanged = (void(*)(void*, ::uDelegate*))Stroke__add_OutputChanged;
    type->__interface_0.__fp_remove_OutputChanged = (void(*)(void*, ::uDelegate*))Stroke__remove_OutputChanged;

    type->SetInterfaces(
        ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof(), offsetof(Stroke__uType, __interface_0));

    type->SetStrongRefs(
        "_output", offsetof(Stroke, _output),
        "_source", offsetof(Stroke, _source),
        "OutputChanged", offsetof(Stroke, OutputChanged));

    type->SetFields(6,
        ::uNewField("_endCap", NULL, offsetof(Stroke, _endCap), ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewField("_offset", NULL, offsetof(Stroke, _offset), ::app::Uno::Float__typeof()),
        ::uNewField("_output", NULL, offsetof(Stroke, _output), ::app::Fuse::Drawing::Polygon__typeof()),
        ::uNewField("_source", NULL, offsetof(Stroke, _source), ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof()),
        ::uNewField("_startCap", NULL, offsetof(Stroke, _startCap), ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewField("_width", NULL, offsetof(Stroke, _width), ::app::Uno::Float__typeof()));

    type->SetFunctions(15,
        ::uNewFunctionVoid("add_OutputChanged", Stroke__add_OutputChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("get_EndCap", Stroke__get_EndCap, 0, false, ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunction("get_Offset", Stroke__get_Offset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Output", Stroke__get_Output, 0, false, ::app::Fuse::Drawing::Polygon__typeof()),
        ::uNewFunction("get_Source", Stroke__get_Source, 0, false, ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof()),
        ::uNewFunction("get_StartCap", Stroke__get_StartCap, 0, false, ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunction("get_Width", Stroke__get_Width, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Invalidate", Stroke__Invalidate, 0, false),
        ::uNewFunction(".ctor", Stroke__New_1, 0, true, Stroke__typeof()),
        ::uNewFunctionVoid("remove_OutputChanged", Stroke__remove_OutputChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_EndCap", Stroke__set_EndCap, 0, false, ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunctionVoid("set_Offset", Stroke__set_Offset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Source", Stroke__set_Source, 0, false, ::app::Fuse::IOutput__Fuse_Drawing_Polygon__typeof()),
        ::uNewFunctionVoid("set_StartCap", Stroke__set_StartCap, 0, false, ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunctionVoid("set_Width", Stroke__set_Width, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Stroke___ObjInit(Stroke* __this)
{
}

void Stroke__add_OutputChanged(Stroke* __this, ::uDelegate* value)
{
    __this->OutputChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->OutputChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

int Stroke__get_EndCap(Stroke* __this)
{
    return __this->_endCap;
}

float Stroke__get_Offset(Stroke* __this)
{
    return __this->_offset;
}

::app::Fuse::Drawing::Polygon* Stroke__get_Output(Stroke* __this)
{
    if (__this->_output != NULL)
    {
        return __this->_output;
    }

    if ((__this->_source == NULL) || (::app::Fuse::IOutput__Fuse_Drawing_Polygon::Output(::uPtr< ::uObject*>(__this->_source)) == NULL))
    {
        return NULL;
    }

    __this->_output = ::uPtr< ::app::Fuse::Drawing::Polygon*>(::app::Fuse::IOutput__Fuse_Drawing_Polygon::Output(::uPtr< ::uObject*>(__this->Source())))->Stroke(::app::Uno::Math__Max_1(NULL, 0.1f, __this->Width()), __this->Offset(), __this->StartCap(), __this->EndCap());
    return __this->_output;
}

::uObject* Stroke__get_Source(Stroke* __this)
{
    return __this->_source;
}

int Stroke__get_StartCap(Stroke* __this)
{
    return __this->_startCap;
}

float Stroke__get_Width(Stroke* __this)
{
    return __this->_width;
}

void Stroke__Invalidate(Stroke* __this)
{
    __this->_output = NULL;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->OutputChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->OutputChanged)->InvokeVoid();
    }
}

Stroke* Stroke__New_1(::uStatic* __this)
{
    Stroke* inst = (Stroke*)::uAllocObject(sizeof(Stroke), Stroke__typeof());
    inst->_ObjInit();
    return inst;
}

void Stroke__remove_OutputChanged(Stroke* __this, ::uDelegate* value)
{
    __this->OutputChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->OutputChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Stroke__set_EndCap(Stroke* __this, int value)
{
    if (value == __this->_endCap)
    {
        return;
    }

    __this->_endCap = value;
    __this->Invalidate();
}

void Stroke__set_Offset(Stroke* __this, float value)
{
    if (value == __this->_offset)
    {
        return;
    }

    __this->_offset = value;
    __this->Invalidate();
}

void Stroke__set_Source(Stroke* __this, ::uObject* value)
{
    if (value == __this->_source)
    {
        return;
    }

    if (__this->_source != NULL)
    {
        ::app::Fuse::IOutput__Fuse_Drawing_Polygon::remove_OutputChanged(::uPtr< ::uObject*>(__this->_source), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Stroke__Invalidate, __this));
    }

    __this->_source = value;

    if (__this->_source != NULL)
    {
        ::app::Fuse::IOutput__Fuse_Drawing_Polygon::add_OutputChanged(::uPtr< ::uObject*>(__this->_source), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Stroke__Invalidate, __this));
    }

    __this->Invalidate();
}

void Stroke__set_StartCap(Stroke* __this, int value)
{
    if (value == __this->_startCap)
    {
        return;
    }

    __this->_startCap = value;
    __this->Invalidate();
}

void Stroke__set_Width(Stroke* __this, float value)
{
    if (value == __this->_width)
    {
        return;
    }

    __this->_width = value;
    __this->Invalidate();
}

}}}}
