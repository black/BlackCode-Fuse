// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ShaderGenerator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_SHADER_GENERATOR_REQUIRE_SHADER_STAGE_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_SHADER_GENERATOR_REQUIRE_SHADER_STAGE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ShaderGenerator {

struct RequireShaderStageAttribute;

struct RequireShaderStageAttribute__uType : ::app::Uno::Attribute__uType
{
};

RequireShaderStageAttribute__uType* RequireShaderStageAttribute__typeof();

void RequireShaderStageAttribute___ObjInit_1(RequireShaderStageAttribute* __this, int stage);
RequireShaderStageAttribute* RequireShaderStageAttribute__New_1(::uStatic* __this, int stage);

struct RequireShaderStageAttribute : ::app::Uno::Attribute
{
    void _ObjInit_1(int stage) { RequireShaderStageAttribute___ObjInit_1(this, stage); }
};

}}}}


#endif
