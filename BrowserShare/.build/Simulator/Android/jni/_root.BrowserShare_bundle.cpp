// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\BrowserShare\BrowserShare.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BrowserShare_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public static generated class BrowserShare_bundle :0
// {
// static BrowserShare_bundle() :0
static void BrowserShare_bundle__cctor__fn(uType* __type)
{
    BrowserShare_bundle::_1b19f03b6_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"1-85239079....*/]);
}

uClassType* BrowserShare_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("BrowserShare_bundle", options);
    type->fp_cctor_ = BrowserShare_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("1-85239079.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::BrowserShare_bundle::_1b19f03b6_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("_1b19f03b6", 0));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> BrowserShare_bundle::_1b19f03b6_;
// }

} // ::g
