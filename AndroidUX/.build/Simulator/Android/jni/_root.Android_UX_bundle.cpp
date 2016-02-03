// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UX\Android UX.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Android_UX_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[3];

namespace g{

// public static generated class Android_UX_bundle :0
// {
// static Android_UX_bundle() :0
static void Android_UX_bundle__cctor__fn(uType* __type)
{
    Android_UX_bundle::background13a965e5e_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"background1...*/]);
    Android_UX_bundle::background23a755e5e_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"background2...*/]);
    Android_UX_bundle::background33b545e5e_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"background3...*/]);
}

uClassType* Android_UX_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android_UX_bundle", options);
    type->fp_cctor_ = Android_UX_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("background1-002363ee.png");
    ::STRINGS[1] = uString::Const("background2-ffc063ee.png");
    ::STRINGS[2] = uString::Const("background3-ffe163ee.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Android_UX_bundle::background13a965e5e_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Android_UX_bundle::background23a755e5e_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Android_UX_bundle::background33b545e5e_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("background13a965e5e", 0),
        new uField("background23a755e5e", 1),
        new uField("background33b545e5e", 2));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Android_UX_bundle::background13a965e5e_;
uSStrong< ::g::Uno::BundleFile*> Android_UX_bundle::background23a755e5e_;
uSStrong< ::g::Uno::BundleFile*> Android_UX_bundle::background33b545e5e_;
// }

} // ::g
