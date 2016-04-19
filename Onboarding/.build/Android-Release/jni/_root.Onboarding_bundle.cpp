// This file was generated based on 'C:\Users\Kuro\Desktop\GitHub\BlackCode-Fuse\Onboarding\Onboarding.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Onboarding_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public static generated class Onboarding_bundle :0
// {
// static Onboarding_bundle() :0
static void Onboarding_bundle__cctor__fn(uType* __type)
{
    Onboarding_bundle::logo31b50f77_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"logo-c84baf...*/]);
}

uClassType* Onboarding_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Onboarding_bundle", options);
    type->fp_cctor_ = Onboarding_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("logo-c84baf19.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Onboarding_bundle::logo31b50f77_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Onboarding_bundle::logo31b50f77_;
// }

} // ::g
