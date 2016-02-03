// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ImportServices.FilenameAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ImportServices{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ImportServices\$.uno(32)
// ---------------------------------------------------------------------------------------

// public sealed class FilenameAttribute :32
// {
uType* FilenameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FilenameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ImportServices.FilenameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)FilenameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FilenameAttribute__New1_fn, 0, true, FilenameAttribute_typeof(), 0));
    return type;
}

// public generated FilenameAttribute() :32
void FilenameAttribute__ctor_1_fn(FilenameAttribute* __this)
{
    __this->ctor_1();
}

// public generated FilenameAttribute New() :32
void FilenameAttribute__New1_fn(FilenameAttribute** __retval)
{
    *__retval = FilenameAttribute::New1();
}

// public generated FilenameAttribute() [instance] :32
void FilenameAttribute::ctor_1()
{
    ctor_();
}

// public generated FilenameAttribute New() [static] :32
FilenameAttribute* FilenameAttribute::New1()
{
    FilenameAttribute* obj1 = (FilenameAttribute*)uNew(FilenameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ImportServices
