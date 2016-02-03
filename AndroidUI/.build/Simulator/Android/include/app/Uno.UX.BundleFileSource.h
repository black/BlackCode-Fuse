// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_BUNDLE_FILE_SOURCE_H__
#define __APP_UNO_U_X_BUNDLE_FILE_SOURCE_H__

#include <app/Uno.UX.FileSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace UX {

struct BundleFileSource;

struct BundleFileSource__uType : ::app::Uno::UX::FileSource__uType
{
};

BundleFileSource__uType* BundleFileSource__typeof();

void BundleFileSource___ObjInit_1(BundleFileSource* __this, ::app::Uno::BundleFile* bundleFile);
bool BundleFileSource__Equals(BundleFileSource* __this, ::uObject* o);
int BundleFileSource__GetHashCode(BundleFileSource* __this);
BundleFileSource* BundleFileSource__New_1(::uStatic* __this, ::app::Uno::BundleFile* bundleFile);
::app::Uno::IO::Stream* BundleFileSource__OpenRead(BundleFileSource* __this);
::uArray* BundleFileSource__ReadAllBytes(BundleFileSource* __this);
::uString* BundleFileSource__ReadAllText(BundleFileSource* __this);

struct BundleFileSource : ::app::Uno::UX::FileSource
{
    ::uStrong< ::app::Uno::BundleFile*> BundleFile;

    void _ObjInit_1(::app::Uno::BundleFile* bundleFile) { BundleFileSource___ObjInit_1(this, bundleFile); }
};

}}}


#endif
