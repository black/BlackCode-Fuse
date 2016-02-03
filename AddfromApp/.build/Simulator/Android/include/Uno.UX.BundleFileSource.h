// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{namespace UX{struct BundleFileSource;}}}
namespace g{namespace Uno{struct BundleFile;}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class BundleFileSource :8
// {
::g::Uno::UX::FileSource_type* BundleFileSource_typeof();
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::BundleFile* bundleFile);
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval);
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval);
void BundleFileSource__New1_fn(::g::Uno::BundleFile* bundleFile, BundleFileSource** __retval);
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval);
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval);
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval);

struct BundleFileSource : ::g::Uno::UX::FileSource
{
    uStrong< ::g::Uno::BundleFile*> BundleFile;

    void ctor_1(::g::Uno::BundleFile* bundleFile);
    static BundleFileSource* New1(::g::Uno::BundleFile* bundleFile);
};
// }

}}} // ::g::Uno::UX
