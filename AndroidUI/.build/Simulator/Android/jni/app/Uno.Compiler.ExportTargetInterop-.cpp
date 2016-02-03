#include <app/Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.DontExportAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.DotNetTypeAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.ExportConditionAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.ExportNameAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.GlslIntrinsicAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.NativeClassAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.OptionalAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.StaticAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DontCopyStructAttribute__uType* DontCopyStructAttribute__typeof()
{
    static ::uStaticStrong<DontCopyStructAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DontCopyStructAttribute__uType*)::uAllocClassType(sizeof(DontCopyStructAttribute__uType), "Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DontCopyStructAttribute__New_1, 0, true, DontCopyStructAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void DontCopyStructAttribute___ObjInit_1(DontCopyStructAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

DontCopyStructAttribute* DontCopyStructAttribute__New_1(::uStatic* __this)
{
    DontCopyStructAttribute* inst = (DontCopyStructAttribute*)::uAllocObject(sizeof(DontCopyStructAttribute), DontCopyStructAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DontExportAttribute__uType* DontExportAttribute__typeof()
{
    static ::uStaticStrong<DontExportAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DontExportAttribute__uType*)::uAllocClassType(sizeof(DontExportAttribute__uType), "Uno.Compiler.ExportTargetInterop.DontExportAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DontExportAttribute__New_1, 0, true, DontExportAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void DontExportAttribute___ObjInit_1(DontExportAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

DontExportAttribute* DontExportAttribute__New_1(::uStatic* __this)
{
    DontExportAttribute* inst = (DontExportAttribute*)::uAllocObject(sizeof(DontExportAttribute), DontExportAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DotNetTypeAttribute__uType* DotNetTypeAttribute__typeof()
{
    static ::uStaticStrong<DotNetTypeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DotNetTypeAttribute__uType*)::uAllocClassType(sizeof(DotNetTypeAttribute__uType), "Uno.Compiler.ExportTargetInterop.DotNetTypeAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "_DotNetName", offsetof(DotNetTypeAttribute, _DotNetName));

    type->SetFunctions(3,
        ::uNewFunction("get_DotNetName", DotNetTypeAttribute__get_DotNetName, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", DotNetTypeAttribute__New_1, 0, true, DotNetTypeAttribute__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DotNetName", DotNetTypeAttribute__set_DotNetName, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void DotNetTypeAttribute___ObjInit_1(DotNetTypeAttribute* __this, ::uString* dotNetName)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->DotNetName(dotNetName);
}

::uString* DotNetTypeAttribute__get_DotNetName(DotNetTypeAttribute* __this)
{
    return __this->_DotNetName;
}

DotNetTypeAttribute* DotNetTypeAttribute__New_1(::uStatic* __this, ::uString* dotNetName)
{
    DotNetTypeAttribute* inst = (DotNetTypeAttribute*)::uAllocObject(sizeof(DotNetTypeAttribute), DotNetTypeAttribute__typeof());
    inst->_ObjInit_1(dotNetName);
    return inst;
}

void DotNetTypeAttribute__set_DotNetName(DotNetTypeAttribute* __this, ::uString* value)
{
    __this->_DotNetName = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExportConditionAttribute__uType* ExportConditionAttribute__typeof()
{
    static ::uStaticStrong<ExportConditionAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ExportConditionAttribute__uType*)::uAllocClassType(sizeof(ExportConditionAttribute__uType), "Uno.Compiler.ExportTargetInterop.ExportConditionAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Condition", offsetof(ExportConditionAttribute, Condition));

    type->SetFields(1,
        ::uNewField("Condition", NULL, offsetof(ExportConditionAttribute, Condition), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ExportConditionAttribute__New_1, 0, true, ExportConditionAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExportConditionAttribute___ObjInit_1(ExportConditionAttribute* __this, ::uString* condition)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Condition = condition;
}

ExportConditionAttribute* ExportConditionAttribute__New_1(::uStatic* __this, ::uString* condition)
{
    ExportConditionAttribute* inst = (ExportConditionAttribute*)::uAllocObject(sizeof(ExportConditionAttribute), ExportConditionAttribute__typeof());
    inst->_ObjInit_1(condition);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExportNameAttribute__uType* ExportNameAttribute__typeof()
{
    static ::uStaticStrong<ExportNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ExportNameAttribute__uType*)::uAllocClassType(sizeof(ExportNameAttribute__uType), "Uno.Compiler.ExportTargetInterop.ExportNameAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(ExportNameAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(ExportNameAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ExportNameAttribute__New_1, 0, true, ExportNameAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExportNameAttribute___ObjInit_1(ExportNameAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

ExportNameAttribute* ExportNameAttribute__New_1(::uStatic* __this, ::uString* name)
{
    ExportNameAttribute* inst = (ExportNameAttribute*)::uAllocObject(sizeof(ExportNameAttribute), ExportNameAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GlslIntrinsicAttribute__uType* GlslIntrinsicAttribute__typeof()
{
    static ::uStaticStrong<GlslIntrinsicAttribute__uType*> type;
    if (type != NULL) return type;

    type = (GlslIntrinsicAttribute__uType*)::uAllocClassType(sizeof(GlslIntrinsicAttribute__uType), "Uno.Compiler.ExportTargetInterop.GlslIntrinsicAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(GlslIntrinsicAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(GlslIntrinsicAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GlslIntrinsicAttribute__New_1, 0, true, GlslIntrinsicAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void GlslIntrinsicAttribute___ObjInit_1(GlslIntrinsicAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

GlslIntrinsicAttribute* GlslIntrinsicAttribute__New_1(::uStatic* __this, ::uString* name)
{
    GlslIntrinsicAttribute* inst = (GlslIntrinsicAttribute*)::uAllocObject(sizeof(GlslIntrinsicAttribute), GlslIntrinsicAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeClassAttribute__uType* NativeClassAttribute__typeof()
{
    static ::uStaticStrong<NativeClassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (NativeClassAttribute__uType*)::uAllocClassType(sizeof(NativeClassAttribute__uType), "Uno.Compiler.ExportTargetInterop.NativeClassAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "_ClassName", offsetof(NativeClassAttribute, _ClassName),
        "_Language", offsetof(NativeClassAttribute, _Language));

    type->SetFunctions(5,
        ::uNewFunction("get_ClassName", NativeClassAttribute__get_ClassName, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Language", NativeClassAttribute__get_Language, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", NativeClassAttribute__New_1, 0, true, NativeClassAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_ClassName", NativeClassAttribute__set_ClassName, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Language", NativeClassAttribute__set_Language, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeClassAttribute___ObjInit_1(NativeClassAttribute* __this, ::uString* language, ::uString* className)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Language(language);
    __this->ClassName(className);
}

::uString* NativeClassAttribute__get_ClassName(NativeClassAttribute* __this)
{
    return __this->_ClassName;
}

::uString* NativeClassAttribute__get_Language(NativeClassAttribute* __this)
{
    return __this->_Language;
}

NativeClassAttribute* NativeClassAttribute__New_1(::uStatic* __this, ::uString* language, ::uString* className)
{
    NativeClassAttribute* inst = (NativeClassAttribute*)::uAllocObject(sizeof(NativeClassAttribute), NativeClassAttribute__typeof());
    inst->_ObjInit_1(language, className);
    return inst;
}

void NativeClassAttribute__set_ClassName(NativeClassAttribute* __this, ::uString* value)
{
    __this->_ClassName = value;
}

void NativeClassAttribute__set_Language(NativeClassAttribute* __this, ::uString* value)
{
    __this->_Language = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OptionalAttribute__uType* OptionalAttribute__typeof()
{
    static ::uStaticStrong<OptionalAttribute__uType*> type;
    if (type != NULL) return type;

    type = (OptionalAttribute__uType*)::uAllocClassType(sizeof(OptionalAttribute__uType), "Uno.Compiler.ExportTargetInterop.OptionalAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", OptionalAttribute__New_1, 0, true, OptionalAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void OptionalAttribute___ObjInit_1(OptionalAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

OptionalAttribute* OptionalAttribute__New_1(::uStatic* __this)
{
    OptionalAttribute* inst = (OptionalAttribute*)::uAllocObject(sizeof(OptionalAttribute), OptionalAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StaticAttribute__uType* StaticAttribute__typeof()
{
    static ::uStaticStrong<StaticAttribute__uType*> type;
    if (type != NULL) return type;

    type = (StaticAttribute__uType*)::uAllocClassType(sizeof(StaticAttribute__uType), "Uno.Compiler.ExportTargetInterop.StaticAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", StaticAttribute__New_1, 0, true, StaticAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void StaticAttribute___ObjInit_1(StaticAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

StaticAttribute* StaticAttribute__New_1(::uStatic* __this)
{
    StaticAttribute* inst = (StaticAttribute*)::uAllocObject(sizeof(StaticAttribute), StaticAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TargetSpecificImplementationAttribute__uType* TargetSpecificImplementationAttribute__typeof()
{
    static ::uStaticStrong<TargetSpecificImplementationAttribute__uType*> type;
    if (type != NULL) return type;

    type = (TargetSpecificImplementationAttribute__uType*)::uAllocClassType(sizeof(TargetSpecificImplementationAttribute__uType), "Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TargetSpecificImplementationAttribute__New_1, 0, true, TargetSpecificImplementationAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void TargetSpecificImplementationAttribute___ObjInit_1(TargetSpecificImplementationAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

TargetSpecificImplementationAttribute* TargetSpecificImplementationAttribute__New_1(::uStatic* __this)
{
    TargetSpecificImplementationAttribute* inst = (TargetSpecificImplementationAttribute*)::uAllocObject(sizeof(TargetSpecificImplementationAttribute), TargetSpecificImplementationAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TargetSpecificTypeAttribute__uType* TargetSpecificTypeAttribute__typeof()
{
    static ::uStaticStrong<TargetSpecificTypeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (TargetSpecificTypeAttribute__uType*)::uAllocClassType(sizeof(TargetSpecificTypeAttribute__uType), "Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TargetSpecificTypeAttribute__New_1, 0, true, TargetSpecificTypeAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void TargetSpecificTypeAttribute___ObjInit_1(TargetSpecificTypeAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

TargetSpecificTypeAttribute* TargetSpecificTypeAttribute__New_1(::uStatic* __this)
{
    TargetSpecificTypeAttribute* inst = (TargetSpecificTypeAttribute*)::uAllocObject(sizeof(TargetSpecificTypeAttribute), TargetSpecificTypeAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
