// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\Android UI.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Android_UI_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[3];

namespace g{

// public static generated class Android_UI_bundle :0
// {
// static Android_UI_bundle() :0
static void Android_UI_bundle__cctor__fn(uType* __type)
{
    Android_UI_bundle::background1546ad6a4_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"background1...*/]);
    Android_UI_bundle::background25449d6a4_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"background2...*/]);
    Android_UI_bundle::background35528d6a4_ = ::g::Uno::BundleFile::New1(::STRINGS[2/*"background3...*/]);
}

uClassType* Android_UI_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android_UI_bundle", options);
    type->fp_cctor_ = Android_UI_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("background1-002363ee.png");
    ::STRINGS[1] = uString::Const("background2-ffc063ee.png");
    ::STRINGS[2] = uString::Const("background3-ffe163ee.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Android_UI_bundle::background1546ad6a4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Android_UI_bundle::background25449d6a4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Android_UI_bundle::background35528d6a4_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("background1546ad6a4", 0),
        new uField("background25449d6a4", 1),
        new uField("background35528d6a4", 2));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Android_UI_bundle::background1546ad6a4_;
uSStrong< ::g::Uno::BundleFile*> Android_UI_bundle::background25449d6a4_;
uSStrong< ::g::Uno::BundleFile*> Android_UI_bundle::background35528d6a4_;
// }

} // ::g
