// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\WelcomeAnimation.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.WelcomeAnimation_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{

// public static generated class WelcomeAnimation_bundle :0
// {
// static WelcomeAnimation_bundle() :0
static void WelcomeAnimation_bundle__cctor__fn(uType* __type)
{
    WelcomeAnimation_bundle::Arrow8e409a4c_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"arrow-fa3f0...*/]);
    WelcomeAnimation_bundle::camera8e20aa71_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"camera-6b33...*/]);
    WelcomeAnimation_bundle::notes1db324e5_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"notes-961c3...*/]);
    WelcomeAnimation_bundle::paymentfbc7c195_ = ::g::Uno::BundleFile::New1(::STRINGS[3/*"payment-4dc...*/]);
    WelcomeAnimation_bundle::sendaf605e11_ = ::g::Uno::BundleFile::New1(::STRINGS[4/*"send-bcf9e8...*/]);
}

uClassType* WelcomeAnimation_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("WelcomeAnimation_bundle", options);
    type->fp_cctor_ = WelcomeAnimation_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("arrow-fa3f0050.png");
    ::STRINGS[1] = uString::Const("camera-6b332fe1.png");
    ::STRINGS[2] = uString::Const("notes-961c309b.png");
    ::STRINGS[3] = uString::Const("payment-4dc34cae.png");
    ::STRINGS[4] = uString::Const("send-bcf9e8a5.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::WelcomeAnimation_bundle::Arrow8e409a4c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::WelcomeAnimation_bundle::camera8e20aa71_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::WelcomeAnimation_bundle::notes1db324e5_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::WelcomeAnimation_bundle::paymentfbc7c195_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::WelcomeAnimation_bundle::sendaf605e11_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Arrow8e409a4c", 0),
        new uField("camera8e20aa71", 1),
        new uField("notes1db324e5", 2),
        new uField("paymentfbc7c195", 3),
        new uField("sendaf605e11", 4));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> WelcomeAnimation_bundle::Arrow8e409a4c_;
uSStrong< ::g::Uno::BundleFile*> WelcomeAnimation_bundle::camera8e20aa71_;
uSStrong< ::g::Uno::BundleFile*> WelcomeAnimation_bundle::notes1db324e5_;
uSStrong< ::g::Uno::BundleFile*> WelcomeAnimation_bundle::paymentfbc7c195_;
uSStrong< ::g::Uno::BundleFile*> WelcomeAnimation_bundle::sendaf605e11_;
// }

} // ::g
