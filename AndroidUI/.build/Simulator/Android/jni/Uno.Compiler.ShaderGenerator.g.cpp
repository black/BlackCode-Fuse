// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ShaderGenerator{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ShaderGenerator\$.uno(25)
// ----------------------------------------------------------------------------------------

// public sealed class ShaderStageInlineAttribute :25
// {
uType* ShaderStageInlineAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ShaderStageInlineAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)ShaderStageInlineAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ShaderStageInlineAttribute__New1_fn, 0, true, ShaderStageInlineAttribute_typeof(), 0));
    return type;
}

// public generated ShaderStageInlineAttribute() :25
void ShaderStageInlineAttribute__ctor_1_fn(ShaderStageInlineAttribute* __this)
{
    __this->ctor_1();
}

// public generated ShaderStageInlineAttribute New() :25
void ShaderStageInlineAttribute__New1_fn(ShaderStageInlineAttribute** __retval)
{
    *__retval = ShaderStageInlineAttribute::New1();
}

// public generated ShaderStageInlineAttribute() [instance] :25
void ShaderStageInlineAttribute::ctor_1()
{
    ctor_();
}

// public generated ShaderStageInlineAttribute New() [static] :25
ShaderStageInlineAttribute* ShaderStageInlineAttribute::New1()
{
    ShaderStageInlineAttribute* obj1 = (ShaderStageInlineAttribute*)uNew(ShaderStageInlineAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ShaderGenerator
