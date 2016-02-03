#include <app/Fuse.Behavior.h>
#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Outracks.Simulator.Bytecode.BindVariable.h>
#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float2.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float3.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float4.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Behavior.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_B-2f12b8b8.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_G-9ba4a577.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_P-b8c5f5fe.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-1468bd04.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-4c6e2f08.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-5223f174.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-b43118f9.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-b9071b0e.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-bed50701.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-cc577328.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-de7a3b36.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-e731453b.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__string.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Uno_Exception.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Uno_UX_Resource.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__float2__uType* EnumerableExtensions_LinkedList__float2__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__float2__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__float2__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__float2__uType), "Uno.Collections.EnumerableExtensions_LinkedList<float2>", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(EnumerableExtensions_LinkedList__float2, Next));

    return type;
}

void EnumerableExtensions_LinkedList__float2___ObjInit(EnumerableExtensions_LinkedList__float2* __this, ::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__float2* EnumerableExtensions_LinkedList__float2__New_1(::uStatic* __this, ::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next)
{
    EnumerableExtensions_LinkedList__float2* inst = (EnumerableExtensions_LinkedList__float2*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__float2), EnumerableExtensions_LinkedList__float2__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__float3__uType* EnumerableExtensions_LinkedList__float3__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__float3__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__float3__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__float3__uType), "Uno.Collections.EnumerableExtensions_LinkedList<float3>", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(EnumerableExtensions_LinkedList__float3, Next));

    return type;
}

void EnumerableExtensions_LinkedList__float3___ObjInit(EnumerableExtensions_LinkedList__float3* __this, ::app::Uno::Float3 item, EnumerableExtensions_LinkedList__float3* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__float3* EnumerableExtensions_LinkedList__float3__New_1(::uStatic* __this, ::app::Uno::Float3 item, EnumerableExtensions_LinkedList__float3* next)
{
    EnumerableExtensions_LinkedList__float3* inst = (EnumerableExtensions_LinkedList__float3*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__float3), EnumerableExtensions_LinkedList__float3__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__float4__uType* EnumerableExtensions_LinkedList__float4__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__float4__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__float4__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__float4__uType), "Uno.Collections.EnumerableExtensions_LinkedList<float4>", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(EnumerableExtensions_LinkedList__float4, Next));

    return type;
}

void EnumerableExtensions_LinkedList__float4___ObjInit(EnumerableExtensions_LinkedList__float4* __this, ::app::Uno::Float4 item, EnumerableExtensions_LinkedList__float4* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__float4* EnumerableExtensions_LinkedList__float4__New_1(::uStatic* __this, ::app::Uno::Float4 item, EnumerableExtensions_LinkedList__float4* next)
{
    EnumerableExtensions_LinkedList__float4* inst = (EnumerableExtensions_LinkedList__float4*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__float4), EnumerableExtensions_LinkedList__float4__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Fuse_Behavior__uType* EnumerableExtensions_LinkedList__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Fuse_Behavior__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Behavior__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Behavior>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Fuse_Behavior, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Fuse_Behavior, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Behavior___ObjInit(EnumerableExtensions_LinkedList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item, EnumerableExtensions_LinkedList__Fuse_Behavior* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Behavior* EnumerableExtensions_LinkedList__Fuse_Behavior__New_1(::uStatic* __this, ::app::Fuse::Behavior* item, EnumerableExtensions_LinkedList__Fuse_Behavior* next)
{
    EnumerableExtensions_LinkedList__Fuse_Behavior* inst = (EnumerableExtensions_LinkedList__Fuse_Behavior*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Fuse_Behavior), EnumerableExtensions_LinkedList__Fuse_Behavior__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.Batching.Batch>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* inst = (EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch), EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.Border>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_Border___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Border* __this, ::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_Border* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__New_1(::uStatic* __this, ::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_Border* inst = (EnumerableExtensions_LinkedList__Fuse_Drawing_Border*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border), EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.Contour>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_Contour___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* inst = (EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour), EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.GradientStop>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item, EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* item, EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* inst = (EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop), EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.PolygonDrawable>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* __this, ::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* inst = (EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable), EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Bytecode.BindVariable>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable), EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Bytecode.Expression>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* __this, ::app::Outracks::Simulator::Bytecode::Expression* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression), EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Bytecode.Parameter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* __this, ::app::Outracks::Simulator::Bytecode::Parameter* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Parameter* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter), EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Bytecode.Statement>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* __this, ::app::Outracks::Simulator::Bytecode::Statement* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Statement* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement), EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Bytecode.TypeName>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName), EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.DialogButton>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* __this, ::app::Outracks::Simulator::DialogButton* item, EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::app::Outracks::Simulator::DialogButton* item, EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton), EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Protocol.ExceptionInfo>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo), EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_), EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType), "Uno.Collections.EnumerableExtensions_LinkedList<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* next)
{
    EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* inst = (EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___), EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__string__uType* EnumerableExtensions_LinkedList__string__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__string__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__string__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__string__uType), "Uno.Collections.EnumerableExtensions_LinkedList<string>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__string, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__string, Next));

    return type;
}

void EnumerableExtensions_LinkedList__string___ObjInit(EnumerableExtensions_LinkedList__string* __this, ::uString* item, EnumerableExtensions_LinkedList__string* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__string* EnumerableExtensions_LinkedList__string__New_1(::uStatic* __this, ::uString* item, EnumerableExtensions_LinkedList__string* next)
{
    EnumerableExtensions_LinkedList__string* inst = (EnumerableExtensions_LinkedList__string*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__string), EnumerableExtensions_LinkedList__string__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Uno_Exception__uType* EnumerableExtensions_LinkedList__Uno_Exception__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Uno_Exception__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Uno_Exception__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Uno.Exception>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Uno_Exception, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Uno_Exception, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Uno_Exception___ObjInit(EnumerableExtensions_LinkedList__Uno_Exception* __this, ::app::Uno::Exception* item, EnumerableExtensions_LinkedList__Uno_Exception* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Uno_Exception* EnumerableExtensions_LinkedList__Uno_Exception__New_1(::uStatic* __this, ::app::Uno::Exception* item, EnumerableExtensions_LinkedList__Uno_Exception* next)
{
    EnumerableExtensions_LinkedList__Uno_Exception* inst = (EnumerableExtensions_LinkedList__Uno_Exception*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Uno_Exception), EnumerableExtensions_LinkedList__Uno_Exception__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__uType* EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Uno.Net.IPEndPoint>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint___ObjInit(EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* __this, ::app::Uno::Net::IPEndPoint* item, EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__New_1(::uStatic* __this, ::app::Uno::Net::IPEndPoint* item, EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* next)
{
    EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* inst = (EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint), EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions_LinkedList__Uno_UX_Resource__uType* EnumerableExtensions_LinkedList__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<EnumerableExtensions_LinkedList__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions_LinkedList__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Uno_UX_Resource__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Uno.UX.Resource>", false, 0, 2, 0);

    type->SetStrongRefs(
        "Item", offsetof(EnumerableExtensions_LinkedList__Uno_UX_Resource, Item),
        "Next", offsetof(EnumerableExtensions_LinkedList__Uno_UX_Resource, Next));

    return type;
}

void EnumerableExtensions_LinkedList__Uno_UX_Resource___ObjInit(EnumerableExtensions_LinkedList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item, EnumerableExtensions_LinkedList__Uno_UX_Resource* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Uno_UX_Resource* EnumerableExtensions_LinkedList__Uno_UX_Resource__New_1(::uStatic* __this, ::app::Uno::UX::Resource* item, EnumerableExtensions_LinkedList__Uno_UX_Resource* next)
{
    EnumerableExtensions_LinkedList__Uno_UX_Resource* inst = (EnumerableExtensions_LinkedList__Uno_UX_Resource*)::uAllocObject(sizeof(EnumerableExtensions_LinkedList__Uno_UX_Resource), EnumerableExtensions_LinkedList__Uno_UX_Resource__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

}}}
