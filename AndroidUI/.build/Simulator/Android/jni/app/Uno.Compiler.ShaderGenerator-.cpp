#include <app/Uno.Compiler.ShaderGenerator.RequireShaderStageAttribute.h>
#include <app/Uno.Compiler.ShaderGenerator.ShaderStage.h>
#include <app/Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ShaderGenerator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ShaderGenerator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RequireShaderStageAttribute__uType* RequireShaderStageAttribute__typeof()
{
    static ::uStaticStrong<RequireShaderStageAttribute__uType*> type;
    if (type != NULL) return type;

    type = (RequireShaderStageAttribute__uType*)::uAllocClassType(sizeof(RequireShaderStageAttribute__uType), "Uno.Compiler.ShaderGenerator.RequireShaderStageAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RequireShaderStageAttribute__New_1, 0, true, RequireShaderStageAttribute__typeof(), ::app::Uno::Compiler::ShaderGenerator::ShaderStage__typeof()));

    ::uRegisterType(type);
    return type;
}

void RequireShaderStageAttribute___ObjInit_1(RequireShaderStageAttribute* __this, int stage)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

RequireShaderStageAttribute* RequireShaderStageAttribute__New_1(::uStatic* __this, int stage)
{
    RequireShaderStageAttribute* inst = (RequireShaderStageAttribute*)::uAllocObject(sizeof(RequireShaderStageAttribute), RequireShaderStageAttribute__typeof());
    inst->_ObjInit_1(stage);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ShaderGenerator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ShaderStage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Compiler.ShaderGenerator.ShaderStage", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Vertex", 4LL,
        "Pixel", 5LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ShaderGenerator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShaderStageInlineAttribute__uType* ShaderStageInlineAttribute__typeof()
{
    static ::uStaticStrong<ShaderStageInlineAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ShaderStageInlineAttribute__uType*)::uAllocClassType(sizeof(ShaderStageInlineAttribute__uType), "Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ShaderStageInlineAttribute__New_1, 0, true, ShaderStageInlineAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShaderStageInlineAttribute___ObjInit_1(ShaderStageInlineAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ShaderStageInlineAttribute* ShaderStageInlineAttribute__New_1(::uStatic* __this)
{
    ShaderStageInlineAttribute* inst = (ShaderStageInlineAttribute*)::uAllocObject(sizeof(ShaderStageInlineAttribute), ShaderStageInlineAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
