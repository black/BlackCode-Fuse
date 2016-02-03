// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\TestApp\TestApp.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.TestApp_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[3];

namespace g{

// public static generated class TestApp_bundle :0
// {
// static TestApp_bundle() :0
static void TestApp_bundle__cctor__fn(uType* __type)
{
    TestApp_bundle::background1544780b1_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"background1...*/]);
    TestApp_bundle::background25cb178b6_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"background2...*/]);
    TestApp_bundle::background30c900bbb_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"background3...*/]);
}

uClassType* TestApp_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("TestApp_bundle", options);
    type->fp_cctor_ = TestApp_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("background1-002363ee.png");
    ::STRINGS[1] = uString::Const("background2-ffc063ee.png");
    ::STRINGS[2] = uString::Const("background3-ffe163ee.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::TestApp_bundle::background1544780b1_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::TestApp_bundle::background25cb178b6_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::TestApp_bundle::background30c900bbb_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("background1544780b1", 0),
        new uField("background25cb178b6", 1),
        new uField("background30c900bbb", 2));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> TestApp_bundle::background1544780b1_;
uSStrong< ::g::Uno::BundleFile*> TestApp_bundle::background25cb178b6_;
uSStrong< ::g::Uno::BundleFile*> TestApp_bundle::background30c900bbb_;
// }

} // ::g
